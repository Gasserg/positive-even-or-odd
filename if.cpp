#include <iostream> 
using namespace std ; 
int main() 
{
	int num ;
	cout << " enter your number : " ; 
	cin >> num ; 
	if ( num >= 0 ) 
		if ( num % 2 == 0 ) 
			cout << " your number is even positive number \n " ;
		else 
			cout << " your number is odd positive number \n " ;
	else 
		cout << " the number is negative \n " ;
}