// N=5
  
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<(n-r-1); c++) {
      cout<<"  ";
    }

    for(int c=0; c<(r+1); c++) {
      cout<<c+1<<" ";
    }

    for(int c=r; c>0; c--) {
      if(r==0) {
        cout<<"  ";
      }
      else {
         cout<<c<<" ";
      }
    }
    
    cout<<endl;
  }
  
}
