// N=5
  
//     * 
//    * * 
//   *   * 
//  *     * 
// *       * 
// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    for(int c=0; c<(n-r-1); c++) {
      cout<<" ";
    }

    for(int c=0; c<(r+1); c++) {
      if(c==0 || c==(r+1-1)){
        cout<<"* ";
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }

  for(int r=0; r<n; r++) {
    for(int c=0; c<r; c++) {
      cout<<" ";
    }

    for(int c=0; c<(n-r); c++) {
      if(c==0 || c==(n-r-1)) {
        cout<<"* ";
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }

}
