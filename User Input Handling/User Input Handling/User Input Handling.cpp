// Taking some user input dynamically to set the game up.
// What is important are dimensions (LxW) and array definitions.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<vector<int>> RowData;

int main()
{
	cout << "Enter the number of Rows: ";
	int Rows = 0;
	cin >> Rows;

	for (int i = 0; i < Rows; i++)
	{
		cout << "Row " << i << ": ";
		string DeliText;
		cin >> DeliText;

		// Converting Strings into int arrays 
		// and pushing them to Array RowData
		vector<int> vect;

		stringstream ss(DeliText);

		int j;

		while (ss >> j)
		{
			vect.push_back(j);

			if (ss.peek() == ',')
				ss.ignore();
		}

		RowData.push_back(vect);
	}


	// Navigating the 2D array and outputting all values
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < RowData[i].size(); j++)
		{
			cout << RowData[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}






