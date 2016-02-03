#include <iostream>
#include <vector>
using namespace std;

int DecimalComb(int Index, int Length, int Depth, int MaxDepth, vector<int> Position, vector<vector<int>>& Result);

int main()
{
	cout << "Enter Length: ";
	int Length = 0;
	cin >> Length;

	cout << "Enter Depth: ";
	int Depth = 0;
	cin >> Depth;

	vector<int> Position (Depth);

	vector<vector<int>> FetchResults;
	DecimalComb(0, Length, 0, Depth - 1, Position, FetchResults);

	/*cout << FetchResults[2][1] << endl;*/
	
	
	return 0;
}

int DecimalComb(int Index, int Length, int Depth, int MaxDepth, vector<int> Position, vector<vector<int>>& Result)
{

	for (; Index <= Length; Index++)
	{
		Position[Depth] = Index;

		if (Depth < MaxDepth)
		{
			DecimalComb(Index, Length, Depth + 1, MaxDepth, Position, Result);
		}
		else
		{
			for (int i = 0; i < Position.size(); i++)
			{
				cout << Position[i];
			}
			cout << endl;
			Result.push_back(Position);
		}
	}

	return 0;
}