#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int random, value; 

	random = rand() % 10 + 5; // 5 to 15
	while (true) {
		cin >> value;
		if (value == random) {
			cout << "Congratulations: " << random << endl;
			exit(0);
		}
		else {
			cout << "wrong" << endl;
		}
		
	}
	return 0;
}