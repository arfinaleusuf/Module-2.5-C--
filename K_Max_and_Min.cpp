#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mini = min({x,y,z});
    int maxx = max({x,y,z});
    cout << mini << " " << maxx;
    return 0;
}