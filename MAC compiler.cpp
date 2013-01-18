/*
This is a program that will take a text file and compile and save it as a .cpp file
Made by Jonathan Hoskins
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int readIntoFile()
{

vector<string> lines;
ifstream myfile("MAC_translator.cpp");
if(myfile.is_open())
{
    string line;
    while(getline(myfile, line))
    {
        lines.push_back(line);
    }
}

ofstream output_file("MAC_compiled.cpp");
ostream_iterator<string> output_iterator(output_file, "\n");
copy(lines.begin(), lines.end(), output_iterator);
cout << "You have compiled the file MAC_compiled.cpp!\n";

return 0;

}

int main()
{


char choice;
cout << "Choice 1: Read from MAC_translator.cpp into MAC_compiled.cpp.\n";
cout << "Choice 2: Exit.\n";
cout << "Please enter your choice:\n";
cin >> choice;

cout << "The corresponding choice is: " << choice << endl;

switch (choice)
	{
	case '1' : readIntoFile();
	break;
	case 'exit' : exit;
	break;
	}

return 0;
}