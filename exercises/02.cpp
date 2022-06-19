#include <iostream>

using namespace std;


int main() {
	//fatorial series


	// stategment variables
	float fat, storage;
	int N;


	// data input
	cin >> N;
	fat = 1;
	// operation
	for (int i = 1; i <= N; i++) {
		fat = 1;
		for (int j = 1; j <= i; j++) {
			fat *= j;			
		}
		storage += 1.0 / (0.0 + fat);
		cout << "1/" << fat << " ";
	}
	
	// result
	cout << endl << storage;

	//end
	return 0;
}