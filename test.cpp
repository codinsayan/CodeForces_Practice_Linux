#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int n;
    cin>>n;

    float k = n*(1.2);
    cout<<k<<endl;
    if(sqrt(k*k) == k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}