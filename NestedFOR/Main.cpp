#include<iostream>
using namespace std;

//#define MULTIPLICATION_TABLE
#define PYTHGORAS_TABLE
//#define SIMPLE_NUMBERS

void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;

		}
	}

#endif // MULTIPLICATION_TABLE

#ifdef SIMPLE_NUMBERS

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				simple = false;
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS

#ifdef PYTHGORAS_TABLE
	int n = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		
		}

		cout <<"\n"<< endl;
	}
#endif // PYTHGORAS_TABLE

}