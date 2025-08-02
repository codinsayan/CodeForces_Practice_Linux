#include<bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int count3=0,count2=0;

        while((n/3)*3 == n) {
            n = n/3;
            count3++;
        }
        while((n/2)*2 == n) {
            n = n/2;
            count2++;
        }
        if(n == 1) {
            // cout<< 2*count3 - count2 <<endl;
            cout<<2*max(count2,count3) - min(count2,count3)<<endl;
        }
        else {
            cout<< -1<<endl;
        }

    }

    return 0;
}

