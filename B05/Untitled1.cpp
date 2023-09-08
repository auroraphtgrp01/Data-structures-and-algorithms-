#include<iostream>
using namespace std; 
int nghichDao(int n) { 
	static int k = 0;
	if(n == 0) { 
		return k;
	} 
	int x = n % 10 ;
	k = k * 10 + x;
	return nghichDao(n/10);
}
main() {
	int n;
	cin>>n;
	cout<<nghichDao(n);
}
