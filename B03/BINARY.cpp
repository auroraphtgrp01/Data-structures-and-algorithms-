#include <iostream>
using namespace std;
int BINARY(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else
    {
        return N % 2 + 10 * BINARY(N / 2);
    }
}
main()
{
    int N;
    cin >> N;
    cout << BINARY(N);
}
