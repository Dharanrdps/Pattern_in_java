
#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    for(int i=0;i<=n/2;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1)
                cout<<"*"<<"	";
            else{if(i==n/2 && j==n/2)
                cout<<"*"<<"	";
            else
                cout<<"	";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n/2;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1)
                cout<<"*"<<"	";
            else{
                if(j==n/2-i || j==n/2+i)
                cout<<"*"<<"	";
                else
                    cout<<"	";
            }    
        }
        cout<<endl;
    }

    //write your code here

}
