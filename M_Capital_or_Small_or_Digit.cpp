#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "IS DIGIT";
    }
    return 0;
}