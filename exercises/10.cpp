// convertion m/s to km/h or km/h to m/s
#include <iostream>

using namespace std;

int main() {
	int option;
	while (true) {
		cout << "Choice a option:" << endl;
		cout << "press 1 - km/h -> m/s" << endl;
		cout << "press 2 - m/s -> km/h" << endl;
		cout << "press 0 - to exit" << endl;
		
		try {
			cin >> option;

			switch (option) {
			case 0:
				exit(0);
				break;
			case 1:
				cout << "km/h: ";
				cin >> option;
				cout << option / 3.6 << endl;
				break;
			case 2:
				cout << "m/s: ";
				cin >> option;
				cout << option * 3.6 << endl;
				break;
			}
		}
		catch (bad_exception  e) {
			e.what();
		}
	}

	return 0;
}