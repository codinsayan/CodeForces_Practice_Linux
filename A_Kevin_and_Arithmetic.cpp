#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n); 
    for(int i = 0; i<n; i++) {
        int k; cin>>k;
        v[i] = k;
    }

    int e = 0, o = 0;

    for(int i: v) {
        if(i%2 == 0) e++;
        else o++;
    }
    if(e>0 && o>0) cout<<o+1<<endl;
    else if(e>0 && o == 0) cout<<1<<endl;
    else if(e == 0 & o>0) cout<<o-1<<endl;
    else cout<<0<<endl;

}

signed main() {
    int t;
    cin>>t;
    while(t--) {

        solve();

    }
    return 0;
}