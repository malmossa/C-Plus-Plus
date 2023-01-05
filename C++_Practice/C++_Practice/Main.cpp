#include <iostream>
using namespace std;

/*
	> grater then
	>= greater than or wqual to
	< less than
	<= less than or wqual to
	== equal-to (equality)
	!= not-equal-to (equality)
*/

int main() {
	cout << boolalpha;

	int age = 37;
	int a = 15;
	int b = 20;
	bool areEqual = a == b;

	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << "age >= 21? " << (age >= 21) << endl;

	system("pause>0");
}

