#include <iostream>

using namespace std;

int choice(int num)
{
	int stuff = 12;
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
	choice(num);
	return 0;
}