#include <iostream>
using namespace std;

int length = 5;


int main()
{

	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			for (int k = j; k < length; k++)
			{
				for (int l = k; l < length; l++)
				{
					cout << i << j << k << l << endl;
				}
			}
		}
	}

	return 0;
}