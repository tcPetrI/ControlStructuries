#include<iostream>
using namespace std;

//#define FOR_SYNTAX
//#define STEPEN

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
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
	int n; //�����, ��� ���������� ����������
	int f = 1; //��������� �����
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
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
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a; //���������� ��������� � �����������
		n = -n; //������ ���� ���������� �� ���������������
	}
	for(int i = 0; i < n; i++)
	{
		N *= a; //��������� ��������� �� ������ �������, � �������� ������������� ��������
		//N = N * a;
		//N = a * N;
	}
	cout << N << endl;
}