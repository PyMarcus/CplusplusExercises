// floyd triangle
#include <iostream>

using namespace std;

int main() {
	int count = 0, last = 1, aux = 0;
	
	for (int i = 1; i <= 6; i++) {
		for (int j = last; j < last + i; j++) {
			cout << j << " ";
			aux = j;
		}
		cout << endl;
		last = aux + 1;
	}

	// end
	return 0;
}
