#include<iostream>
using namespace std;


//#define SQUARE
//#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;

	cout << "Введите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif  //TRIANGLE_1

#ifdef TRIANDLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANDLE_2

#ifdef TRIANDLE_3
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i)
				cout << "  ";
			else
				cout << "* ";
		}
		/*for (int j = 0; j < i; j++) cout << "  ";
		for (int j = 0; j < n; j++) cout << "* ";*/ //другой вариант решения
		cout << endl;
	}
#endif // TRIANDLE_3

#ifdef TRAINDLE_4
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= n - i)
				cout << "  ";
			else
				cout << "* ";
		}
		/*for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";*/ //другой вариант решения
		cout << endl;
	}

#endif // TRAINDLE_4

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = -1; j < i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((j + i) % 2 == 0)
			{
				cout << " -";
			}
			else
			{
				cout << " +";
			}*/
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
}