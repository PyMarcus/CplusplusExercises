// how time i need to be more height than you?
#include <iostream>

using namespace std;

int main() {
	int value = 13;

	// 2 of 20, 3 of 10, 2 of 5, 5 of 2, 10 of 1
	int twenty = 0, ten = 0, five = 0, two = 0, one = 0;

	while (value > 0) {
		if (value >= 20 && twenty <= 2) {
			value -= 20;
			twenty++;
		}
		if (value >= 10 && ten <= 3) {
			value -= 10;
			ten++;
		}
		if (value >= 5 && five <= 2) {
			value -= 5;
			five++;
		}
		if (value >= 2 && two <= 5) {
			value -= 2;
			two++;
		}
		if (value >= 1 && one <= 10) {
			value -= 1;
			one++;
		}
		
	}
	
	cout << twenty << " " << ten << " " << five << " " << two << " " << one;

	// end
	return 0;
}