class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf){
    int res = 1;
  
    if (branch < rest | branch < leaf){ // if branch is too short
      return res;
    }

    int lcm = 1; // lowest common multiple of leaf and rest
    for (lcm = 1; lcm <= rest*leaf; lcm++){
      if ((lcm%rest==0) && (lcm%leaf==0)){
        break;
      }
    }
    res += branch/lcm;
    return res;
  }
};
