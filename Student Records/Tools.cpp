// Student Records - Tools.cpp

#include"Tools.h"
#include<iostream>
using namespace std;

void pause( string prompt )
{
	cout << prompt;
	flushInput();
}

void errorEmptyList(void)
{
	std::cout << "Error: The list is empty." << std::endl;
}

void errorStudentNotFound(std::string identifier)
{
	std::cout << "Student with student \"" << identifier
		<< "\" not found!" << std::endl;
}

void flushInput(void)
{
	cin.ignore(999,'\n');
}

int getInt( string prompt )
{
	do
	{
		int userInput;
		cout << prompt;
		cin >> userInput;
		if ( cin )
		{
			flushInput();
			return userInput;
		}
		cin.clear();
		flushInput();
		cout << "Input error! Please enter an integer value." << endl;
	} while (true);
}

string getString(string prompt)
{
	do
	{
		string userInput;
		cout << prompt;
		cin >> userInput;
		if (cin)
		{
			flushInput();
			return userInput;
		}
		cin.clear();
		flushInput();
		cout << "Input error! Please enter a string value." << endl;
	} while (true);
}

string getStringLine(string prompt)
{
	do
	{
		string userInput;
		cout << prompt;
		getline(cin,userInput);
		if (cin)
		{
			return userInput;
		}
		cin.clear();
		flushInput();
		cout << "Input error! Please enter a string value." << endl;
	} while (true);
}

char getChar( string prompt )
{
	do
	{
		char userInput;
		cout << prompt;
		cin >> userInput;
		if ( cin )
		{
			flushInput();
			return userInput;
		}
		cin.clear();
		flushInput();
		cout << "Input error! Please enter a character value." << endl;
	} while (true);
}

bool getBool( string prompt )
{
	do
	{
		switch (getChar(prompt))
		{
		case 'Y': case 'y': return true;
		case 'N': case 'n': return false;
		default:
			cout << "Please answer with y or n." << endl;
		}
	} while (true);
}
