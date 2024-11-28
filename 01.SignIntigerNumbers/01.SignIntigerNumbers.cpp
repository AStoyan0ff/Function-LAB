#include <iostream>
//#include <array>
using namespace std;

int main() {

	int n; cin >> n;

	if (n > 0) {
		cout << "The number " << n << " " << "is positive." << endl;
	}
	else if (n < 0) {
		cout << "The number " << n << " " << "is negative." << endl;
	}
	else if (n == 0) {
		cout << "The number " << n << " " << "is zero." << endl;
	}

	return 0;

}