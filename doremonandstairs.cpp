#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, k, p;
    cin >> n >> m;

    k = (n / 2 + n % 2);

    if (n < m) 
    {
        cout << -1 << endl;
        return 0;
    }

    if (k % m == 0) 
    {
        cout << k << endl;
    }
    else 
    {
        p = k + (((((k / m) + 1) * m) - k) / 2) + (((((k / m) + 1) * m) - k) % 2);
        if (p % m != 0) 
        {
            if (m < k) 
            {
                cout << (k + ((((k / m) + 1) * m) - k)) << endl;
            }
            else 
            {
                cout << m << endl;
            }
        }
        else 
        {
            cout << p << endl;  
        }
    }
    return 0;
}