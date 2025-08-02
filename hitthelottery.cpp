#include<iostream>
using namespace std;

int check(long long n)
{
    if(n == 0) return 0;
    else return 1;
}

int main()
{
    long long n, ans = 0;
    cin >> n;
    
    while(n>0)
    {
        ans += n/100;
        n = n%100;
        if(check(n) == 0) break;
        
        ans += n/20;
        n = n%20;
        if(check(n) == 0) break;
        
        ans += n/10;
        n = n%10;
        if(check(n) == 0) break;
    
        ans += n/5;
        n = n%5;
        if(check(n) == 0) break;

        ans += n/1;
        n = n%1;
    }
    cout << ans << endl;

    
    return 0;
    
}