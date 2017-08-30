#include <iostream>
#include <vector>
using namespace std; 

int main(){
  auto list = vector<int>{1,2,3,4}; 

  for(auto element: list)
    cout << element << endl; 

  return 0; 
}

