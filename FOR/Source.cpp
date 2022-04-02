#include<iostream>
using namespace std;

//#define FOR_SYNTAX
//#define STEPEN

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n; // количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef STEPEN
	int n; //Число, для вычисления Факториала
	int f = 1; //Факториал числа
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // STEPEN


	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a; //Отправляем основание в знаменатель
		n = -n; //Меняем знак показателя на противоположный
	}
	for(int i = 0; i < n; i++)
	{
		N *= a; //Результат умножения на основе степени, и получаем промежуточное значение
		//N = N * a;
		//N = a * N;
	}
	cout << N << endl;
}