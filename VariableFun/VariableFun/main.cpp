#include <iostream>
#include <string>
using namespace std;

int main()
{
	int myInt;
	myInt = 15;

	double myDouble = 3.13159;

	char singleChar = 'a';
	string myName = "Mansor";

	bool isRaining = false;
	bool isAlive = true;


	cout << myInt << endl;
	cout << myDouble << endl;
	cout << singleChar << endl;
	cout << myName << endl;
	cout << "Hello " << myName << endl;
	cout << isRaining << endl;
	cout << isAlive << endl;
	cout << boolalpha << isRaining << endl;
	cout << boolalpha << isAlive << endl;
	cout << boolalpha << isRaining << " " << isAlive << endl;

	system("pause>0");
}

