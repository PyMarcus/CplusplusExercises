// serie harmonica
#include <iostream>

using namespace std;

int main() {
	// stagement variables
	string storage = "";
	int n;

	// data input
	cin >> n;

	// loop
	for (int i = 1; i < n + 1; i++) storage += "1/" + to_string(i) + " ";
	
	// display
	cout << storage;

	// end
	return 0;
}