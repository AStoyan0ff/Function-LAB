#include <iostream>
using namespace std;

static void printSmallNumber(int a, int b, int c) {
	int smallLest = a;
	
	if (b < smallLest) {
		smallLest = b;
	}

	if (c < smallLest) {
		smallLest = c;
	}

	cout << smallLest << endl;

}

int main() {
	int numOne, numTwo, numThree;
	cin >> numOne >> numTwo >> numThree;
		
	printSmallNumber(numOne, numTwo, numThree);

	return 0;

}





	

