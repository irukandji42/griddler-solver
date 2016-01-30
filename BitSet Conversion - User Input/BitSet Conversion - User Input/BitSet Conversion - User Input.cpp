// This program will handle a single user input of a specified length
// as I have not yet found a way to handle multiple loop nesting
// dynamically based off of user input.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <bitset>
#include <math.h>
#include <time.h>

using namespace std;

void UserInput(vector<int>& Result)
{

	cout << "Please enter three int values separated by" << endl;
	cout << "commas with the following format:#,#,#" << endl;

	cout << "Row: ";
	string DeliText;
	cin >> DeliText;

	// Converting String Value into Int Value 
	stringstream ss(DeliText);

	int j;

	while (ss >> j)
	{
		Result.push_back(j);

		if (ss.peek() == ',')
			ss.ignore();
	}
}
void BitSetValues(vector<int> Value, vector<bitset<20>>& BitResultFetched)
{
	const int Length = 20;

	int N0 = (int(pow(double(2), double(Value[0]))) - 1);
	int N1 = (int(pow(double(2), double(Value[1]))) - 1);
	int N2 = (int(pow(double(2), double(Value[2]))) - 1);

	int FreeSpace = Length - (Value[0] + Value[1] + Value[2] + 2);

	for (int i = 0; i <= FreeSpace; i++)
	{
		for (int j = i; j <= FreeSpace; j++)
		{
			for (int k = j; k <= FreeSpace; k++)
			{
				bitset<Length> A_0 = N0 << (FreeSpace + 2 + Value[2] + Value[1] - i);
				bitset<Length> A_1 = N1 << (FreeSpace + 1 + Value[2] - j);
				bitset<Length> A_2 = N2 << (FreeSpace - k);
				bitset<Length> Combined = A_0 | A_1 | A_2;

				BitResultFetched.push_back(Combined);
			}
		}
	}
}

bitset<20> Compare;


int main()
{
	vector<int> ResultFetched;
	UserInput(ResultFetched);

	vector<bitset<20>> BitResultFetched;
	BitSetValues(ResultFetched, BitResultFetched);

	for (int i = 0; i < BitResultFetched.size(); i++)
	{
		
		if (i == 0)
		{
			Compare = (BitResultFetched[0] & BitResultFetched[1]);
		}
		else
		{
			Compare = Compare & BitResultFetched[i];
		}
		/*cout << BitResultFetched[i] << endl;*/
	}

	cout << Compare << endl;

	return 0;
}









