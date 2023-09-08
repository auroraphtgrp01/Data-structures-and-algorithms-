#include <iostream>
using namespace std;
int SUM(int N)
{
	if (N == 0)
	{
		return 0;
	}
	else
	{
		return SUM(N - 1) + N;
	}
}
int main()
{
	int N;
	cout << "NHAP VAO N: ";
	cin >> N;
	cout << "SUM = " << SUM(N);
	return 0;
}