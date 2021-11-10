#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

enum oddeven { Odd, Even};

int main()
{
	int random[100];
	int x;
	for (int i = 0; i < 100; i++)
	{
		srand((unsigned)time(0));
		random[i] = 1 + (rand() % 100);
		x = random[i];
		if (x % 2 == 0)
		{
			cout << x << endl;
		}
		break;
		else if (x % 2 != 0)
		{
			cout << x << endl;
		}
		break;
	}

	return 0;
}
