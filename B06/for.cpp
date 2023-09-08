#include <iostream>
using namespace std;
void nhapMang(int A[], int &soLuong)
{
    cout << "Nhap vao so luong: ";
    cin >> soLuong;
    for (int i = 0; i < soLuong; i++)
    {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> A[i];
    }
}
void xuatMang(int A[], int soLuong)
{
    for (int i = 0; i < soLuong; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int A[10000], soLuong;
    nhapMang(A, soLuong);
    xuatMang(A, soLuong);
    return 0;
}