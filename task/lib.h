﻿// Функция заменяет в строке все пробелы на табуляции
char* ReplaceByTabSpace(char* str);

// Функция подсчитывает количество слов во введенном предложении
int CountWordInString(const char* str);

// Функция определяет длину строки
int mystrlen(const char* s);

// Функция выводит русский текст в окно консоли
void RussianMessage(const char* s);

// Функция подсчитывает количество гласных букв в русском тексте
int NumberOfVowelsInString(const char* str);

// Функция копирует строку str2 в буфер, адресуемый через str1.
// Функция возвращает указатель на первую строку str1.
char* mystrcpy(char* s1, const char* s2);

// Функция осуществляет поиск символа s в строке str. 
// Функция возвращает указатель на первое вхождение символа в строку, в противном случае 0.
char* mystrchr(char*, char);

// Функция присоединяет строку str2 к строке str1.
// Функция возвращает указатель на первую строку str1.
char* mystrcat(char* s1, const char* s2);