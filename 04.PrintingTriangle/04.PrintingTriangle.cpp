#include <iostream>
using namespace std;

void printTriangle(int n) {

    for (int i = 1; i <= n; i++) {
        for (int a = 1; a <= i; a++) {
            cout << a << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int b = 1; b <= i; b++) {
            cout << b << " ";
        }
        cout << endl;
    }

}

int main() {

    int n;
    cin >> n;

    printTriangle(n);

    return 0;
}
