#include <iostream>

using namespace std;

int main() {
	// fibonacci series
	// 1 1 2 3 5  ...
	int sum = 1, x = 1, y = 1;
	cout << x << " " << y << " ";
	for (int i = 1; i < 10; i++) {
		sum = x + y;
		cout << sum << " ";
		y = x;
		x = sum;
	}
	return 0;
}