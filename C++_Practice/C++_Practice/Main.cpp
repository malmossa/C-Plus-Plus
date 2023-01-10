#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	bool isReaining = true;
	bool isWarm = true;

	cout << boolalpha;

	cout << "And: " << (isReaining && isWarm) << endl;
	cout << "Or: " << (isReaining || isWarm) << endl;
	cout << "Not: " << (!isReaining) << endl;

	system("pause>0");
}

