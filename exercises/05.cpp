#include <iostream>

using namespace std;

// find the less number divisible for numbers in interval 1 to 20.
int main() {
	int counter = 1, number = 1;

	for (;;) {
		for (int i = 1; i <= 20; i++) {
			if (number % i == 0) counter++;
		}

		if (counter == 20) 	break;
		else {
			++number;
			counter = 0;
		}

		cout << number << endl;
	}

	//end
	return 0;
}