#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int n;
        cin>>n;

        long long int ans = 0;
        if(n%2 == 0){
            cout<<n/2<<endl;
        }
        else
        {   
            long long int p = n/2;
            cout<<((p*(p+1)-(p+1)*(p+1)))<<endl;
        }

    return 0;
}