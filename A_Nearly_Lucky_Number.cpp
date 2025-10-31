#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >>n;
    bool isflag=true;;
    while(n!=0){
        int digit=n%10;
        if(digit!=4 && digit!=7){
            isflag=false;
            break;
        }
        n=n/10;
    }
    if(isflag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
