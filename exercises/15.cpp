// most heigher palindrom
#include <iostream>

using namespace std;

bool isApalin(int number) {
	/*
	Verify if number is a palindrom
	Args
		- number: integer
	Return
		- boolean
	*/
	string value = to_string(number);
	for (int i = 0; i < value.length(); i++) {
		if (value[i] != value[value.length() - (i + 1)]) {
			return false;
		}
	}
	return true;
}

int main() {
	int number;

	for (int i = 999; i >= 1; i--) {
		for (int j = 999; j >= 0; j--) {
			number = j * i;
			cout << j << " * " << i << endl;
			if (isApalin(number)) {
				cout << number << " = " << i << "*" << j;
				exit(0);
			}
		}
	}

	// end
	return 0;
}