#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, K;
        cin >> X >> Y >> K;

        if (K <= X && K <= Y)
        {
            cout << 0 << " " << 0 << " " << K << " " << 0 << endl;
            cout << 0 << " " << 0 << " " << 0 << " " << K << endl;
        }
        else
        {
            if (Y > X)
            {
                cout << 0 << " " << (Y - X) << " " << X << " " << Y << endl;
                cout << 0 << " " << X << " " << X << " " << 0 << endl;
            }
            else
            {
                cout << (X-Y) << " " << 0<< " " << X << " " << Y << endl;
                cout << 0 << " " << Y << " " << Y << " " << 0 << endl;
            }
        }
    }

    return 0;
}