// Accessing individual bit flags of a larger bit number
// Bitset only accepts constant value, will have to make 
// it work dynamically though.

#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{
	vector<int> MyArray = { 0,1,2,3,4 };
	vector<int> Lol;

	cout << MyArray.size() << endl;

	for (int i = 0; i < MyArray.size(); i++)
	{
		if (MyArray[i] != 3)
		{
			Lol.push_back(MyArray[i]);
		}
	}

	//for (int i = 0; i < Lol.size(); i++)
	//{
	//	cout << Lol[i] << endl;
	//}

	MyArray = Lol;

	cout << MyArray.size() << endl;

	return 0;
}