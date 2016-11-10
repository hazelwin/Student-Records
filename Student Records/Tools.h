// Student Records - Tools.h

#include<string>
#include"StudentNode.h"


#ifndef TOOLS_LOCK
#define TOOLS_LOCK

int getInt( std::string prompt );
// precondtion: loop until user enters in a string
// postcondtion: returns userinput

std::string getString(std::string prompt);
std::string getStringLine(std::string prompt);
char getChar( std::string prompt );
// precondtion: loop until user enters in a character
// postcondtion: returns user input
bool getBool( std::string prompt );
// precondtion: calls getChar 
// postcondtion: returns a bool statement depending on user input

void flushInput(void);
// precondtion: none
// postcondtion: calls cin.ignore

void pause( std::string prompt );

void errorEmptyList(void);
// precondtion: none
// postcondtion: error input so dislay the list is empty

void errorStudentNotFound(std::string identifier);
// precondtion: none
// postcondtion: display error message that student's record is not found

#endif
