#include<bits/stdc++.h>
using namespace std;
 
 
signed main() {
 
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
 
        vector <int> v(n);
 
        for(int i = 0; i<n; i++) {
            cin>>v[i];
        }
 
        int cnt = 0, ref=v[0];

        bool flag = false;
        for(int i = 0; i<n-1; i++) {
            if(i == 0 || flag == true) {
                if(v[i+1]>v[i]) {ref = v[i]; cnt++; flag = false; continue;}
                else if(v[i+1]<v[i]) {ref=v[i]; flag= false; continue;}
                else {flag = true; continue;}
            }
            if(v[i+1]>v[i] && ref>v[i]) {ref = v[i]; cnt++; continue;}
            else if(v[i+1]==v[i] && ref>v[i]) continue;
            else {
                ref = v[i];
                continue;
            }
            
        }
        if(v[n-2]>v[n-1] || (flag == true && v[n-2] == v[n-1])) cnt++;
        
        if (cnt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}