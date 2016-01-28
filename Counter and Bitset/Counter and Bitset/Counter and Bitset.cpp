#include <iostream>
#include <bitset>
#include <math.h>
#include <time.h>
using namespace std;

const int Length = 25;

int A2 = 1;
int A1 = 1;
int A0 = 1;

int N2 = (int(pow(double(2), double(A2))) - 1);
int N1 = (int(pow(double(2), double(A1))) - 1);
int N0 = (int(pow(double(2), double(A0))) - 1);

int FreeSpace = Length - (A0 + A1 + A2 + 2);

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
				bitset<Length> A_2 = N2 << (FreeSpace + 2 + A0 + A1 - i);
				bitset<Length> A_1 = N1 << (FreeSpace + 1 + A0 - j);
				bitset<Length> A_0 = N0 << (FreeSpace - k);
				bitset<Length> Combined = A_0 | A_1 | A_2;

				/*cout << Combined << endl;*/
			}
		}
	}

	t2 = clock();
	float diff((float)t2 - (float)t1);
	cout << diff << endl;
	system("pause");
	return 0;
}



