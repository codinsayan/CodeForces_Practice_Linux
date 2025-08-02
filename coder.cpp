//Boiler Plate sucks

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int n, ans;
    cin>>n;

    if(n%2 == 0) ans = n*n/2;
    else ans = (n/2+1)*(n/2+1) + (n/2)*(n/2);

    cout<<ans<<endl;

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<n; j++)
            {
                if(j%2 == 0) cout<<'C';
                else cout<<'.';
            }
            cout<<endl;
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(j%2 == 0) cout<<'.';
                else cout<<'C';
            }
            cout<<endl;
        }
    }


    

    return 0;
}