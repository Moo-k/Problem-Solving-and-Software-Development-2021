#pragma once
#include <string>
#include <vector>

using namespace std;

class DownloadingFiles{
public:
	double actualTime(vector<string> tasks){
		double totaltime = 0;
		vector<double> speeds;
		vector<double> times;
		char delimiter = ' ';
		for (int i = 0; i < tasks.size(); i++){
			string token = tasks[i].substr(0, tasks[i].find(delimiter));
			speeds.push_back(stoi(token,nullptr,10));
			string token2 = tasks[i].substr(tasks[i].find(delimiter));
			times.push_back(stoi(token2,nullptr,10));
		};
		double size = 0;
    double totalspeed = 0;
		for (int i = 0; i < speeds.size(); i++){
			size+=(times.at(i)*speeds.at(i));
			totalspeed+=speeds.at(i);
		}
		return (size/totalspeed);
	}
};
