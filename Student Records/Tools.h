// Student Records - Tools.h

#include<string>

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

int getInt( std::string prompt );

std::string getString(std::string prompt);
std::string getStringLine(std::string prompt);
char getChar( std::string prompt );
bool getBool( std::string prompt );

void flushInput(void);
void pause( std::string prompt );

#endif