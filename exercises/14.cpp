// sum prime numbers less than 2 mi
#include <iostream>

using namespace std;

int main() {
	int sum = 0, count = 0;

	for (int i = 0; i < 2000000; ++i) {
		for (int x = 2; x < i; x++) {
			if (i % x == 0) {
				count++;
			}
		}
		if (count < 1) {
			cout << i << endl;
			sum += i;
		}
		count = 0;
	}

	cout << "Response: " << sum << endl;
	// end
	return 0;
}