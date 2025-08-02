#include<bits/stdc++.h>
using namespace std;


signed main() {
    int n;
    cin>>n;
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
 
        vector <int> v(n);

        for(int i = 0; i<n; i++) {
            cin>>v[i];
        }

        int min = *min_element(v.begin(),v.end());

        int front, back;

        for(int i = 0; i<n; i++) {
            if(v[i] == min) front = i;
        }
        for(int i = n-1; i>=0; i--) {
            if(v[i] == min) back = i;
        }

        
    
    }
    return 0;
}