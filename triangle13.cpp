#include <iostream>

using namespace std;

int main () {
    for(char i='E'; i>='A'; i--) {
        for(char j='A'; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
