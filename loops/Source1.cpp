#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE
#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "");
#if defined WHILE
	int n;
	int i = 0;
	cout << "Введите количество итераций: "; cin >> n;
	while (i<n)
	{
		cout << i << "Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif
}