#include <iostream>
using namespace std;
		
static int power(int number, int step) {
	
	int result = 1;
	
	for (int i = 0; i < step; i++) {
		result *= number;
	
	}
		return result;
	 
}

	 int main() {

		 int number;
		 cin >> number;

		 int step;
		 cin >> step;

		 int result = power(number, step);
		 cout << result << endl;

		 return 0;
	 
	 }


	