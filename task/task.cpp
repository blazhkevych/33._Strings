#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	char answer{ 0 };
	int choice{ 0 };

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

		}
		break;

		case 2:
		{
			/*
			b. int mystrcmp (const char* str1, const char* str2); - функция
			сравнивает две строки, и, если строки равны возвращает 0,
			если первая строка больше второй, то возвращает 1, иначе -1.
			*/

		}
		break;

		case 3:
		{
			/*
			c. int StringToNumber (char* str); - функция конвертирует строку
			в число и возвращает это число.
			*/

		}
		break;

		case 4:
		{
			/*
			d. char* NumberToString (int number); - функция конвертирует
			число в строку и возвращает указатель на эту строку.
			*/

		}
		break;

		case 5:
		{
			/*
			e. char* Uppercase (char* str1); - функция преобразует строку в
			верхний регистр.
			*/

		}
		break;

		case 6:
		{
			/*
			f. char* Lowercase (char* str1); - функция преобразует строку в
			нижний регистр.
			*/

		}
		break;

		case 7:
		{
			/*
			g. char* mystrrev (char* str); - функция реверсирует строку и
			возвращает указатель на новую строку.
			*/

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