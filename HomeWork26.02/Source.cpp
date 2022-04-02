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
	int number; // число, вводимое с клавиатуры
	int reverse = 0; // обратная запись введённого числа
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //освобождаем место под младший разряд
		reverse += buffer % 10; //получаем младший разряд числа и сохраняем его
		buffer /= 10; //убираем сохраненный разряд
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число не палиндром" << endl;
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
		cout << ("Счастливый билет");
	else
		cout << ("Несчастливый билет");
#endif
#ifdef SHOOTER

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if (key == 'w') cout << "Вперед" << endl;
		else if (key == 's') cout << "Назад" << endl;
		else if (key == 'a') cout << "Влево" << endl;
		else if (key == 'd') cout << "Вправо" << endl;
		else if (key == 'f') cout << "Огонь" << endl;
		else if (key == 'j') cout << "Прыжок" << endl;
		else cout << "Error: неизвестное действие" << endl;
	} while (key != 27);
	//не смог назначить кнопки на enter и пробел
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
		case  UP_ARROW:// cout << "Вперед" << endl; break;
		case  'w':// cout << "Вперед" << endl; break;
		case  'W': cout << "Вперед" << endl; break;
		case  DOWN_ARROW:// cout << "Назад" << endl; break;
		case  's':// cout << "Назад" << endl; break;
		case  'S': cout << "Назад" << endl; break;
		case LEFT_ARROW:// cout << "Влево" << endl; break; 
		case 'a':// cout << "Влево" << endl; break;
		case 'A': cout << "Влево" << endl; break;
		case RIGHT_ARROW:// cout << "Вправо" << endl; break;
		case 'd':// cout << "Вправо" << endl; break;
		case 'D': cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape: cout << "Выход" << endl;
		case -32:break;
		default: cout << "Error: неизвестное действие" << endl;
		}
	} while (key != Escape);
#endif
}