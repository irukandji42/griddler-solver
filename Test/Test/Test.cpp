// Testing inserting an array into an array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> data1 = { 1, 2, 1, 4, 3 };
	vector<int> data2 = { 2, 2, 2, 1, 2 };

	vector<vector<int>> allData = { data1, data2 };
	cout << allData[0][3] << endl;

	return 0;
}