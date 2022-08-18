#include <iostream>
#include <math.h>
using namespace std;
int MOD(int x, int y){
  if(fabs(x) > fabs(y))
    return MOD(fabs(x)-fabs(y),fabs(y));
  if(fabs(x) < fabs(y))
    return fabs(x);
  if(fabs(x) == fabs(y))
    return 0;
  if(y==0)
      return -1;
}
int main() { 
  int x=-50;
  int y=2;
  cout << MOD(x,y);
  
}
