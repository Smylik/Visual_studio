#include <iostream>
#include <cstdio>

using namespace std;

int choice(int num)
{
	int stuff;
	cout << "Enter your number: ";
	cin >> stuff;
	if (num==1)
		for (int j = 1; j <= stuff; j++)
			if (j%2!=0)
				cout << "Odd: " << j << "\n";
	if (num==2)
		for (int j = 1; j <= stuff; j++)
			if (j % 2 == 0)
				cout << "Even: " << j << "\n";
	return 0;
	
}

int main()
{
	int stuff = 12;
	int num;
	cout << "Choose between 1-odd and 2-even: ";
	cin >> num;
	if (num != 1 & num != 2)
	{
		cout << "Error!" << "\n";
		exit(EXIT_FAILURE);
	}
	choice(num);
	return 0;
}