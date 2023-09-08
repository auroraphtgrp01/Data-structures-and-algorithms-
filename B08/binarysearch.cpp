#include <iostream>
using namespace std;
void inputArr(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int binarySeacrh(int A[], int N, int K)
{
    int left = 0, right = N - 1, mid = N / 2;
    while (left <= right)
    {
        if (A[mid] == K)
        {
            return true;
        }
        else if (A[mid] < K)
        {
            ssss
        }
    }
}