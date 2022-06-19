#include <iostream>

using namespace std;

int main() {
	// sum odd numbers in specifical interval
	int sum = 0, limit, final_limit;
	
	cout << "Insert the limit1: ";
	cin >> limit;

	cout << "Insert the limit2: ";
	cin >> final_limit;

	for (int i = limit; i <= final_limit; i++) {
		sum += i % 2 != 0 ? i : 0;  // ternary operator
	}
	
	// response
	cout << endl << sum;

	//end
	return 0;
}