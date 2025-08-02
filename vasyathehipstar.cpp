#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int a,b, min, left, max;
    cin>>a>>b;

    if(a>b) 
    {   
        min = b; 
        max = a;
    }
    else if(a==b) 
    {   
        min = b;
        max = a;
    }
    else 
    {
        min = a;
        max = b;
    }

    left = (max - min)/2;

    cout<<min<<" "<<left<<endl;

    return 0;
}