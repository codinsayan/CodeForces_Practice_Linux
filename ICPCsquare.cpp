#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int N, D, S;
    cin>>N>>D>>S;
 
    int p = N/S;
    int q = p*S;
 
    if((p!=0) && ((D-S)>=S)) cout<<q<<endl;
    else cout<<S<<endl;
 
    return 0;
}