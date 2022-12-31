#include <iostream>;
using namespace std;


/*
   Arithmetic Operators:
   ---------------------
   + addition operator.
   - subtraction operator.
   * multiplication operator.
   / division operator.
   % modulus operator.
*/

int main() {
	
	int a = 10;
	int b = 3;
	
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;

	// Compound addition, subtraction
	int num1 = 10;
	int num2 = 10;
	num1 += 5; // num1 = num1 + 5
	num2 -= 5; // num2 = num2 - 5

	// increment, decrement by 1
	int num3 = 0;
	int num4 = 0;
	num3++;
	num4--;



	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Num 1 = " << num1 << endl;
	cout << "Num 2 = " << num2 << endl;
	cout << "Num 3 = " << num3 << endl;
	cout << "Num 4 = " << num4 << endl;

	system("pause>0");
}

