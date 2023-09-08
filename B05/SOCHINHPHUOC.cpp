#include<iostream>
#include<math.h>
using namespace std;
bool isPerfectSquare(int num) {
    return sqrt(num) * sqrt(num) == num;
}
main() { 
	int N ; 
	cin>>N ; 
	int S = 0;
	int i = 0;
	while(1) { 
	if(S==N) { 
		break;
	}
		if(isPerfectSquare(i)) {
			S++;
		cout<<"i = "<<i<<"  ";
		}	i++;
			cout<<"s = "<<S<<" ; "<<endl;
	}
	cout<<i;
}
