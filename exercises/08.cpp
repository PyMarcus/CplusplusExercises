#include <iostream>

using namespace std;

int main() {
	int base = 1, base2 = 1;

	while (true) {
		cin >> base;
		cin >> base2;
		if (base != 0 || base2 != 0) break;
		base = (base * base2) / (base + base2);
		cout << base << endl;
		base = 1;	
	}
}