#include<windows.h>
#include<iostream>
using namespace std;

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