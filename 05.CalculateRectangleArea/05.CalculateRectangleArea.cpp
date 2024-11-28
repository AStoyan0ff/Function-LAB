#include <iostream>
using namespace std;

static double calculateTriangleArea(double width, double height) {
	return width * height * 2 / 2;
	}

	int main() {
		
		double widthA, heightA;
		cin >> widthA >> heightA;

		double area = calculateTriangleArea(widthA, heightA);
		cout << area << endl;

		return 0;

	}

	

