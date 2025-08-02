#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
    int m,n,a, ans;
    cin>>m>>n>>a;
    
    if((m%a != 0) && (n%a != 0))
    {
        m = m + (a - m%a);
        n = n + (a - n%a);
    }
    else if(m%a != 0) m = m + (a - m%a);
    else if(n%a != 0) n = n + (a - n%a);

    
    ans = (m*n)/(a*a);
    
    cout << ans << endl;
    
    return 0;
}
