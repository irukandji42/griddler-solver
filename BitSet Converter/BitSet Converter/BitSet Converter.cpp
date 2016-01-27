#include <iostream>
#include <bitset>
using namespace std;

int length = 4;

int main()
{
	cout << "Enter a number between 0 & " << length << ": " << endl;

	int UserNumber = 0;
	cin >> UserNumber;

	if (0 <= UserNumber && UserNumber <= length)
	{
		cout << "UserNumber = " << UserNumber << endl;
	}

	while (!(0 <= UserNumber && UserNumber <= length))
	{
		cout << "Invalid, please enter a valid number: ";
		cin >> UserNumber;
	}

	for (int i = 0; i <= length; i++)
	{
		bitset<7> BitUserNumber1 = 1 << (length - i);
		bitset<7> BitUserNumber2 = 1 << (length - i + 2);
		bitset<7> CombBitNumber = BitUserNumber1 | BitUserNumber2;

		cout << CombBitNumber << endl;
	}

	return 0;
}