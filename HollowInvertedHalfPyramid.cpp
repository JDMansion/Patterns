// N=6
  
// * * * * * * 
// *       * 
// *     * 
// *   * 
// * * 
// * 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<(n-r); c++) {
      if(r==0) {
        cout<<"* ";
      }
      else if(c==0 || c==(n-r-1)) {
        cout<<"* ";
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  
}
