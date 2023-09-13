// N=5
  
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int r=0; r<n; r++) {
    char ch;
    for(int c=0; c<(r+1); c++) {
      ch = c + 1 + 'A' - 1;
      cout<<ch;
    }

    for(char x=ch; x>'A'; ) {
      x--;
      cout<<x;
    }
    cout<<endl;
  }
  
}
