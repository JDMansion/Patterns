// N=5
  
// 1 
// 1 2 
// 1   3 
// 1     4 
// 1 2 3 4 5 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<(r+1); c++) {
      if(r==(n-1)) {
        cout<<c+1<<" ";
      }
      else if(c==0) {
        cout<<1<<" ";
      }
      else if(c==r) {
        cout<<r+1<<" ";
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  
}
