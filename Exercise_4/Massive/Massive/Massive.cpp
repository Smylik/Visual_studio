#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int i, j; //i-столбец; j-строка
	int datares;
	int result=0;
	const int n = 5;
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	datares = buf.tm_mday % n;

	int changer[n][n];
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			changer[i][j] = i + j;
	}

	cout << "Array: " << endl;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			cout << changer[i][j];
		cout << endl;
	}
	
	cout<<"Remainder of division/number of line: " << datares << "\n";
	cout << "Chosen line: ";

	for (j = 0; j < n; ++j)
	{	
		result = result + changer[datares][j];
		cout << changer[datares][j];
	}
	cout << endl;

	cout <<"Result: " << result;
	
	return 0;
}
