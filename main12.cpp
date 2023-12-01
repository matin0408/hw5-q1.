#include <iostream>

using namespace std ;

main() {
	int salary, result  ;
	cout<< "please inter your salary : ";
	cin >> salary ;
	if ( salary < 6000000 ) {
		cout << "result : " << salary ;
	}
	else if ( salary >= 6000000 && salary < 8000000 ){
		result = salary - (0.05 * salary);
		cout << "result : " << result ;
	}
	else if ( salary >= 8000000 && salary < 10000000 ){
		result = salary - (0.10 * salary);
		cout << "result : " << result ;
	}
	else if ( salary >= 10000000 && salary < 14000000 ){
		result = salary - (0.15 * salary);
		cout << "result : " << result ;
	}
	else if ( salary >= 14000000 && salary < 18000000 ){
		result = salary - (0.20 * salary);
		cout << "result : " << result ;
	}
	else if ( salary >= 18000000 && salary < 25000000 ){
		result = salary - (0.25 * salary);
		cout << "result : " << result ;
	}
	else {
		result = salary - (0.30 * salary);
		cout << "result : " << result ;
	}
}