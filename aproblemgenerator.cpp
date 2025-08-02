#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;

        int count{}, a{}, b{}, c{}, d{}, e{}, f{}, g{};

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'A') a++;
            else if(s[i] == 'B') b++;
            else if(s[i] == 'C') c++;
            else if(s[i] == 'D') d++;
            else if(s[i] == 'E') e++;
            else if(s[i] == 'F') f++;
            else if(s[i] == 'G') g++;
        }

        if(m > a) count += (m-a);
        if(m > b) count += (m-b);
        if(m > c) count += (m-c);
        if(m > d) count += (m-d);
        if(m > e) count += (m-e);
        if(m > f) count += (m-f);
        if(m > g) count += (m-g);

        cout<<count<<endl;        

    }

    return 0;
}