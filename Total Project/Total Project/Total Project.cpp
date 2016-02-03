// I am layering in all the progress I have made so far.

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <bitset>
using namespace std;

void UserInput(vector<vector<int>>& Row_ClueIntArray, vector<vector<int>>& Col_ClueIntArray)
{
	cout << "Number of Rows: ";
	int NumRows = 0;
	cin >> NumRows;
	
	cout << "Number of Columns: ";
	int NumColumns = 0;
	cin >> NumColumns;

	cout << "Enter clue values separated by " << endl;
	cout << "commas like so:#,#,#,#" << endl;

	// for loop that takes clues as strings and converts
	// them to ints and places them in a 2D array
	for (int i = 0; i < NumRows; i++)
	{
		cout << "Row " << i + 1 << ": ";
		string ClueInput = "";
		cin >> ClueInput;

		vector<int> Row_ClueIntArray_Holder;
		stringstream ss(ClueInput);

		int j;
		while (ss >> j)
		{
			Row_ClueIntArray_Holder.push_back(j);

			if (ss.peek() == ',')
				ss.ignore();
		}
		Row_ClueIntArray.push_back(Row_ClueIntArray_Holder);
	}

	// I am thinking I should make this a function because
	// it is used twice. It Would cut down on repetitive 
	// programming.
	for (int i = 0; i < NumColumns; i++)
	{
		cout << "Column " << i + 1 << ": ";
		string ClueInput = "";
		cin >> ClueInput;
		
		vector<int> Col_ClueIntArray_Holder;
		stringstream ss(ClueInput);

		int j;
		while (ss >> j)
		{
			Col_ClueIntArray_Holder.push_back(j);

			if (ss.peek() == ',')
				ss.ignore();
		}
		Col_ClueIntArray.push_back(Col_ClueIntArray_Holder);
	}
}
//void DecToBitset(vector<vector<bitset<20>>>& Row_BitArray, vector<vector<bitset<20>>>& Col_BitArray)
//{
//	
//}



int main()
{
	// Arguments(int Vectors) to be passed by reference to the UserInput function.
	vector<vector<int>> IntRowArrayFetched;
	vector<vector<int>> IntColArrayFetched;

	// Function UserInput handles user input.
	UserInput(IntRowArrayFetched, IntColArrayFetched);

	// Arguments(bitset Vectors) to be passed by reference to the DecToBitset function.
	vector<vector<bitset<20>>> BitRowArrayFetched;
	vector<vector<bitset<20>>> BitColArrayFetched;

	// Function that converts decimal Clue values entered
	// into Bitset values.
	/*DecToBitset(BitRowArrayFetched, BitColArrayFetched);*/

	return 0;
}








