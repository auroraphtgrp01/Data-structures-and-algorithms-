#include<iostream> 
using namespace std;
void inputArr(int A[], int&n) { 
	for(int i = 0 ; i< n ; i++) { 
		cin>>A[i];
	}
}
void outputArr(int A[], int &n) { 
	for(int i = 0; i < n ; i++ )  {
		cout<<A[i]<< " ";
	}
}
int main(){ 
	int A[1000], B[1000], N,M;
	cout<<"Nhap N: "; cin>>N;
	inputArr(A, N) ; 
	cout<<"Nhap M: "; cin>>M;
	inputArr(B, M);
	outputArr(A,N); 
	cout<<"";
	outputArr(B,M);
	return 0;
}
