#include<bits/stdc++.h>
using namespace std;

void solve() {
   string s; cin>>s;
   int i, n=s.size();
   
   if (s[2] == 'p') {cout<<"ftp://"; i = 3;}
   else {cout<<"http://"; i = 4;}
   
   cout<<s[i];
   i++;
   
   for(;i<n-1;i++) {
   
       if(s[i] == 'r' && s[i+1] == 'u' ) {
           if(i==n-2){cout<<".ru"; break;}
           else {
               cout<<".ru/";
               for(int j = i+2; j<n; j++) cout<<s[j];
               break;
           }
       }  
       cout<<s[i];
   }
}

signed main() {


    solve();

    return 0;
}