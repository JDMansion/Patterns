// N=5
  
// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<(n-r); c++) {
      if(r==0) {
        cout<<c+1<<" ";
      }
      else if(c==0) {
        cout<<r+1<<" ";
      }
      else if(c==(n-r-1)) {
        cout<<5;
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  
}
