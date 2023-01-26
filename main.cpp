#include "vecfuncs.h"
#include "vecfuncs.cpp"
int main() {

  int min, max; 
  vector<int> userNums; 
  
  fillVector(userNums); 
  cout << "size: " << userNums.size() << endl; 

  findExtremes(userNums, min, max);
  
}

