#include <iostream>
using namespace std;
long long GT(long long N)
{
    if (N <= 1)
    {
        return N;
    }
    else
    {
        return GT(N - 1) * N;
    }
}
int count(long long N)
{
    string S = to_string(N);
    int count = 0;
    for (int i = S.length() - 1; i >= 0; i--)
    {
        if (S[i] == '0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
int main()
{
    int N;
    cin >> N;
    cout << "GT = " << GT(N);
    cout << "\nSO CHU SO 0 TRONG GIAI THUA LA: " << count(GT(N));
    return 0;
}