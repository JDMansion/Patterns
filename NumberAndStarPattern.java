// N= 4
  
// 1 
// 2 * 2 
// 3 * 3 * 3 
// 4 * 4 * 4 * 4 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<((2*r)+1); c++) {
      if(c%2 == 0) {
        cout<<r+1<<" ";
      }
      else {
        cout<<"* ";
      }
    }
    cout<<endl;
  }
  
}
