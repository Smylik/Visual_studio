#include <iostream>

using namespace std;
int main()
{
	int stuff = 12;
	for (int j = 1; j <= stuff; j++)
		if (j % 2 == 0)
			cout << "Even: " << j << "\n";
		else
			cout << "Odd: " << j << "\n";
	return 0;
}