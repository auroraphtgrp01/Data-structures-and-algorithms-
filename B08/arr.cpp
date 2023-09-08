#include <iostream>
using namespace std;
void inputArr(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void outputArr(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void insertC(int A[], int N, int B[], int M, int C[], int &k)
{
    int i = 0, j = 0;
    while (i < N && j < M)
    {
        if (A[i] <= B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i < N)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j < M)
    {
        C[k] = B[j];
        k++;
        j++;
    }
}
int main()
{
    int A[1000], B[1000], C[1000], N, M;
    int K = 0;
    cout << "Nhap N: ";
    cin >> N;
    inputArr(A, N);
    cout << "Nhap M: ";
    cin >> M;
    inputArr(B, M);
    cout << "Mang A :";
    outputArr(A, N);
    cout << endl;
    cout << "Mang B: ";
    outputArr(B, M);
    cout << endl;
    // cout << k;
    cout << "MANG C:  ";
    insertC(A, N, B, M, C, K);
    outputArr(C, K);
    return 0;
}