#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    bool flag = false;

    while(n>0) {
        int a;
        cin>>a;

        if(a==1){
            flag = true;
        }
        n--;

    }
    if (flag==true) {
        cout<<"HARD"<<endl;
    }
    else {
        cout<<"EASY"<<endl;
    }
    return 0;
}