// Case Manipulator.cpp : Defines the entry point for the console application.
// Program written by Emmanuel Klutse on 17/03/2018n

#include "pch.h"
#include <iostream>
using namespace std;

/* Determines character casing, changing upper- to lowercase letters
and vice versa */
void reverse(char *);

/* Converts all characters from upper- to lowercase */
void lowercase(char *);

/* Converts all characters from lower- to uppercase */
void uppercase(char *);

int main()
{
	const int MAX_CHARS = 501;
	char         sentence[MAX_CHARS];

	cout << "\n\tCASE MANIPULATOR by Emmanuel:)\n\n\t"
		<< "Enter a sentence, " << (MAX_CHARS - 1)
		<< " characters in length, and I will\n\t"
		<< "first reverse all upper and lowercase characters, then\n\t"
		<< "I will change all characters to lowercase, and lastly I\n\t"
		<< "will change all characters to uppercase.\n\n";

	cout << "\n\tPlease enter your sentence:\n\t";
	cin.getline(sentence, MAX_CHARS);

	cout << "\n\n\tCHARACTER CASE REVERSAL\n";
	reverse(sentence);

	cout << "\n\tAll character cases have been reversed:\n"
		<< "\t" << sentence << "\n\n";

	cout << "\n\tCHARACTERS TO LOWERCASE:\n";
	lowercase(sentence);

	cout << "\n\tAll uppercase characters have been changed "
		<< "to lowercase:\n"
		<< "\t" << sentence << "\n\n";

	cout << "\n\tCHARACTERS TO UPPERCASE:\n";
	uppercase(sentence);

	cout << "\n\tAll lowercase characters have been changed "
		<< "to uppercase:\n"
		<< "\t" << sentence << "\n\n";

	system("pause");

	return 0;
}

/* **********************************************************
Definition: reverse

This function accepts a pointer to a C-string as argument.
It reverses all upercase characters to lowercase and vice
versa.
********************************************************** */

void reverse(char *senPtr)
{
	for (size_t index = 0; senPtr[index] != '\0'; index++)
	{
		if (isupper(senPtr[index]))
		{
			senPtr[index] = tolower(senPtr[index]);
		}

		else if (islower(senPtr[index]))
		{
			senPtr[index] = toupper(senPtr[index]);
		}
	}
}

/* **********************************************************
Definition: lowercase

This function accepts a pointer to a C-string as argument.
It converts all characters from upper- to lowercase.
********************************************************** */

void lowercase(char *senPtr)
{
	for (size_t index = 0; senPtr[index] != '\0'; index++)
	{
		if (isupper(senPtr[index]))
		{
			senPtr[index] = tolower(senPtr[index]);
		}
	}
}

/* **********************************************************
Definition: uppercase

This function accepts a pointer to a C-string as argument.
It converts all characters from lower- to uppercase.
********************************************************** */

void uppercase(char *senPtr)
{
	for (size_t index = 0; senPtr[index] != '\0'; index++)
	{
		if (islower(senPtr[index]))
		{
			senPtr[index] = toupper(senPtr[index]);
		}
	}
}