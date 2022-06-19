#include <iostream>

using namespace std;

int main() {
	// odd numerators / sequencial numbers
	float odd = 1;

	for (int i = 1; i <= 50; i++) {
		cout << odd / i << " ";
		odd = (0.0 + odd) + 2;
	}
	return 0;
}