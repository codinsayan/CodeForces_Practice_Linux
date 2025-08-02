#include<bits/stdc++.h>
using namespace std;

signed main() {
    string s; cin>>s;
    string temp = s;
    for(int i = 0; i<s.size(); i++) {
        if((int)(s[i]-'0') == 9 && i == 0) continue;
        else if((int)(s[i]-'0')>=5) s[i] = char(57-((int)(s[i]-'0')));
    }
    cout<<s<<endl;
    return 0;
}