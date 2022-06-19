#include <iostream>
#include <string>

using namespace std;

int main(){
	//to show which number that the sum of the parts to the power of 2, is equal itself
	string part1, part2, part3, part4;
	int sum;

	for (int i = 1000; i <= 9999; i++) {
		part1 = to_string(i)[0];
		part2 = to_string(i)[1]; 
		part3 = to_string(i)[2];
		part4 = to_string(i)[3];
		sum = (stoi(part1.append(part2)) + stoi(part3.append(part4)));
		sum *= sum;
		if(i == sum) cout << i << endl;
	}

	// end
	return 0;
}