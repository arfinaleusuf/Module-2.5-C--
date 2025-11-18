#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int *a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int *B = new int[M];
    for (int i = 0; i < N; i++)
    {
        B[i] = a[i];
    }
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }
    delete[] a;
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}