#include<iostream>
#include<conio.h>
using namespace std;

//#define PALINDROME
//#define LUCK
//#define SHOOTER
#define SHOOTER2

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number; // �����, �������� � ����������
	int reverse = 0; // �������� ������ ��������� �����
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //����������� ����� ��� ������� ������
		reverse += buffer % 10; //�������� ������� ������ ����� � ��������� ���
		buffer /= 10; //������� ����������� ������
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
#endif

#ifdef LUCK

	int LuckyNumber = 0; cin >> LuckyNumber;
	int sumFirst3 = 0;
	int sumSecond3 = 0;

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			sumFirst3 += LuckyNumber % 10;
		}
		else
		{
			sumSecond3 += LuckyNumber % 10;
		}
		LuckyNumber /= 10;
	}
	if (sumFirst3 == sumSecond3)
		cout << ("���������� �����");
	else
		cout << ("������������ �����");
#endif
#ifdef SHOOTER

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if (key == 'w') cout << "������" << endl;
		else if (key == 's') cout << "�����" << endl;
		else if (key == 'a') cout << "�����" << endl;
		else if (key == 'd') cout << "������" << endl;
		else if (key == 'f') cout << "�����" << endl;
		else if (key == 'j') cout << "������" << endl;
		else cout << "Error: ����������� ��������" << endl;
	} while (key != 27);
	//�� ���� ��������� ������ �� enter � ������
#endif 

#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define SPACE ' '
#define Enter 13
#define Escape 27
#ifdef SHOOTER2 
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case  UP_ARROW:// cout << "������" << endl; break;
		case  'w':// cout << "������" << endl; break;
		case  'W': cout << "������" << endl; break;
		case  DOWN_ARROW:// cout << "�����" << endl; break;
		case  's':// cout << "�����" << endl; break;
		case  'S': cout << "�����" << endl; break;
		case LEFT_ARROW:// cout << "�����" << endl; break; 
		case 'a':// cout << "�����" << endl; break;
		case 'A': cout << "�����" << endl; break;
		case RIGHT_ARROW:// cout << "������" << endl; break;
		case 'd':// cout << "������" << endl; break;
		case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32:break;
		default: cout << "Error: ����������� ��������" << endl;
		}
	} while (key != Escape);
#endif
}