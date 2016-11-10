// Student Records - Tools.h

#include<string>
#include"StudentNode.h"


#ifndef TOOLS_LOCK
#define TOOLS_LOCK

int getInt( std::string prompt );

std::string getString(std::string prompt);
std::string getStringLine(std::string prompt);
char getChar( std::string prompt );
bool getBool( std::string prompt );

void flushInput(void);
void pause( std::string prompt );

void errorEmptyList(void);
void errorStudentNotFound(std::string identifier);

#endif