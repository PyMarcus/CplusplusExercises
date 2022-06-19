#include <iostream>

using namespace std;

int main() {
	// find the growing multiples of numbers
	int limit, n, m, x = 1, i = 0;

	cout << "Insert the limit: ";
	cin >> limit;

	cout << "Insert the first number: ";
	cin >> n;

	cout << "Insert the other number: ";
	cin >> m;

	while (x <= limit) {
		if (i != 0) {
			if (i == m * n) {
				cout << i << " ";
				x++;
			}
		}		
		if (i != m * n) {
			if (i % m == 0 || i % n == 0) {
				cout << i << " ";
				x++;
			}
		}
		
		i++;
	}

	//end
	return 0;
}