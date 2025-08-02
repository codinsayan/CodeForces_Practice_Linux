#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
    
        string s;
        cin>>s;

        int n = s.size();
        // cout<<s<<" "<<n<<endl;
        int count0=0, count1=0;
        for(int i = 0; i<n; i++) {
            if(s[i] == '0') count0++;
            else count1++;
        }
        // cout<<count0<<" "<<count1<<endl;
        int count = 0,i = 0;
        int p = count1, q = count0;
        if(count0 == count1) cout<<0<<endl;
        else {
            while(count0>0 && count1>0) {
                if(s[i] == '0') count1--;
                else count0--;
                count++;
                i++;
            }
            if(count1 == 0 && count0>0) {
                while(count0>0 && s[i]=='1') {
                    count++;
                    i++;
                }
            }
            else if(count0 == 0 && count1>0) {
                while(count1>0 && s[i]=='0') {
                    count++;
                    i++;
                }
            }
            cout<<n-count<<endl;

        }
    }
    
}