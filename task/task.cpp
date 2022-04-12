#include <iostream>
#include "lib.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	char answer{ 0 }; // Do you want to continue?
	int choice{ 0 }; // Выбор задания

	char str1[100], str2[100], * p;
	int number{ 0 };

	do
	{
		cout << "Enter task number:: "
			<< "\nTask 1."
			<< "\nTask 2."
			<< "\nTask 3."
			<< "\nTask 4."
			<< "\nTask 5."
			<< "\nTask 6."
			<< "\nTask 7."
			<< endl;
		cin >> choice;
		cin.get();

		switch (choice)
		{
		case 1:
		{
			/*
			a. char* mystrstr (char* str1, char* str2); - функция осуществляет
			поиск подстроки str2 в строке str1. Функция возвращает
			указатель на первое вхождение подстроки str2 в строку str1, в
			противном случае 0.
			*/
			RussianMessage("Введите 1 строку символов: ");
			cin.getline(str1, 100);
			RussianMessage("Введите искомую строку символов: ");
			cin.getline(str2, 100);

			p = mystrstr(str1, str2);

			if (!p)
				RussianMessage("Строка не найдена!\n");
			else
			{
				RussianMessage("Первое вхождение строки в строку: ");
				cout << p << endl;
			}
		}
		break;

		case 2:
		{
			/*
			b. int mystrcmp (const char* str1, const char* str2); - функция
			сравнивает две строки, и, если строки равны возвращает 0,
			если первая строка больше второй, то возвращает 1, иначе -1.
			*/
			RussianMessage("Введите 1 строку символов: ");
			cin.getline(str1, 100);
			RussianMessage("Введите 2 строку символов: ");
			cin.getline(str2, 100);
			cout << mystrcmp(str1, str2) << endl;
		}
		break;

		case 3:
		{
			/*
			c. int StringToNumber (char* str); - функция конвертирует строку
			в число и возвращает это число.
			*/
			RussianMessage("Введите строку символов: ");
			cin.getline(str1, 100);
			number = StringToNumber(str1);
			RussianMessage("Число: ");
			cout << number << endl;
		}
		break;

		case 4:
		{
			/*
			d. char* NumberToString (int number); - функция конвертирует
			число в строку и возвращает указатель на эту строку.
			*/
			RussianMessage("Введите число: ");
			cin >> number;
			cin.get();
			p = NumberToString(number);
			RussianMessage("Строка: ");
			cout << p << endl;

			delete[]p;
		}
		break;

		case 5:
		{
			/*
			e. char* Uppercase (char* str1); - функция преобразует строку в
			верхний регистр.
			*/
			RussianMessage("Введите строку символов: ");
			cin.getline(str1, 100);
			RussianMessage("Модифицированная строка: ");
			cout << Uppercase(str1) << endl;
		}
		break;

		case 6:
		{
			/*
			f. char* Lowercase (char* str1); - функция преобразует строку в
			нижний регистр.
			*/
			RussianMessage("Введите строку символов: ");
			cin.getline(str1, 100);
			RussianMessage("Модифицированная строка: ");
			cout << Lowercase(str1) << endl;
		}
		break;

		case 7:
		{
			/*
			g. char* mystrrev (char* str); - функция реверсирует строку и
			возвращает указатель на новую строку.
			*/

			RussianMessage("Введите 1 строку символов: ");
			cin.getline(str1, 100);
			RussianMessage("Модифицированная строка: ");
			cout << mystrrev(str1) << endl;
		}
		break;
		}

		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}