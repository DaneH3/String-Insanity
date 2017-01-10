#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	string strFind;
	int found = 0;

	cout << "Please enter the word you wish to search for: \n";
	getline(cin, strFind);
	
	system("cls");

	while (true){
		srand(time(NULL));
			for (unsigned int j = 0; j < 100; ++j){
				str = "\"" + ((rand() % 40));
				
				cout << str;
				
				if (str.find(strFind) != string::npos){
					
					//found!
					found++;
				}
				cout << "\n";
			}
		//system("cls");

		cout << "\n\nHow many times \"" << strFind << "\" has been detected: " << found << "\n\n";

		found = 0;

		system("pause");
		system("cls");
	}
	return 0;
}