#include<windows.h>
#include<iostream>
using std::cout;

// Функция заменяет в строке все пробелы на табуляции
char* ReplaceByTabSpace(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			str[i] = '\t';
	return str;
}

// Функция подсчитывает количество слов во введенном предложении
int CountWordInString(const char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && str[i] != '\t' && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			count++;
	return count;
}

// Функция определяет длину строки
int mystrlen(const char* s)
{
	int counter = 0;
	for (int i = 0; s[i] != '\0'; i++)
		counter++;
	return counter;
}

// Функция подсчитывает количество гласных букв в русском тексте
int NumberOfVowelsInString(const char* str)
{
	int counter = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'а' || str[i] == 'е' || str[i] == 'ё' ||
			str[i] == 'и' || str[i] == 'о' || str[i] == 'у' ||
			str[i] == 'ы' || str[i] == 'э' || str[i] == 'ю' || str[i] == 'я')
			counter++;
	}
	return counter;
}

// Функция выводит русский текст в окно консоли
void RussianMessage(const char* s)
{
	char* buf = new char[mystrlen(s) + 1];
	CharToOemA(s, buf);
	cout << buf;
	delete[] buf;
}

// Функция копирует строку str2 в буфер, адресуемый через str1.
// Функция возвращает указатель на первую строку str1.
char* mystrcpy(char* s1, const char* s2)
{
	int i;
	for (i = 0; s2[i] != 0; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return s1;
}

// Функция присоединяет строку str2 к строке str1.
// Функция возвращает указатель на первую строку str1.
char* mystrcat(char* s1, const char* s2)
{
	char* p = s1;
	while (*p != '\0')
		p++;
	int i;
	for (i = 0; s2[i] != '\0'; i++)
		p[i] = s2[i];
	p[i] = '\0';
	return s1;
}

// Функция осуществляет поиск символа s в строке str. 
// Функция возвращает указатель на первое вхождение символа в строку, в противном случае 0.
char* mystrchr(char* s1, char s)
{
	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s)
			return s1 + i;
	}
	return nullptr;
}

// Функция реверсирует строку и
// возвращает указатель на новую строку.
char* mystrrev(char* str)
{
	int len = mystrlen(str);
	int j = len - 1;
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}
	return str;
}

// Функция преобразует строку в нижний регистр.
char* Lowercase(char* str1)
{
	for (int i = 0; i < mystrlen(str1); i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] = str1[i] + 32;
		}
	}
	return str1;
}

// Функция преобразует строку в верхний регистр.
char* Uppercase(char* str1)
{
	for (int i = 0; i < mystrlen(str1); i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
	}
	return str1;
}

// Функция конвертирует число в строку и возвращает указатель на эту строку.
char* NumberToString(int number)
{
	int size{ 0 };
	int temp = number;
	do
	{
		number = number / 10;
		size++;
	} while (number);
	char* ptrStr = new char[size + 1];
	ptrStr[size] = '\0';

	number = temp;
	while (number)
	{
		ptrStr[--size] = abs(number % 10) + '0';
		number /= 10;
	}
	return ptrStr;
}

// Функция конвертирует строку в число и возвращает это число.
int StringToNumber(char* str)
{
	int number{ 0 };
	int i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number + (str[i] - 48);
		number *= 10;
		i++;
	}
	number /= 10;

	return number;
}

// Функция сравнивает две строки, и, если строки равны возвращает 0,
// если первая строка больше второй, то возвращает 1, иначе - 1.
int mystrcmp(const char* str1, const char* str2)
{
	for (;;)
	{
		char ch1 = *str1++;
		char ch2 = *str2++;
		if (ch1 != ch2)
			return ch1 < ch2 ? -1 : 1;
		if (!ch1)
			return 0;
	}
}

// Функция осуществляет поиск подстроки str2 в строке str1. Функция возвращает
// указатель на первое вхождение подстроки str2 в строку str1, в
// противном случае 0.
char* mystrstr(char* str1, char* str2)
{
	int count{ 0 };
	int str2Size = mystrlen(str2);
	for (int i = 0; str2[i] != '\0'; i++)
	{
		for (int j = 0; j < str1[j] != '\0'; j++)
		{
			if (str1[j] == str2[i])
			{
				count++;
				if (count == str2Size)
				{
					return str1 + j + 1 - str2Size;
				}
				i++;
			}
		}
	}
	return nullptr;
}