#include <iostream>
#include <bitset>
#include <math.h>
#include <time.h>
#include <vector>
using namespace std;

const int Length = 25;

vector<int> Array = { 3,2,1 };

int N2 = (int(pow(double(2), double(Array[0]))) - 1);
int N1 = (int(pow(double(2), double(Array[1]))) - 1);
int N0 = (int(pow(double(2), double(Array[2]))) - 1);

int FreeSpace = Length - (Array[0] + Array[1] + Array[2] + 2);

int main()
{
	clock_t t1, t2;
	t1 = clock();

	for (int i = 0; i <= FreeSpace; i++)
	{
		for (int j = i; j <= FreeSpace; j++)
		{
			for (int k = j; k <= FreeSpace; k++)
			{
				bitset<Length> A_2 = N2 << (FreeSpace + 2 + Array[2] + Array[1] - i);
				bitset<Length> A_1 = N1 << (FreeSpace + 1 + Array[2] - j);
				bitset<Length> A_0 = N0 << (FreeSpace - k);
				bitset<Length> Combined = A_0 | A_1 | A_2;

				cout << Combined << endl;
			}
		}
	}

	t2 = clock();
	float diff((float)t2 - (float)t1);
	cout << diff << endl;
	system("pause");
	return 0;
}



