// MediaPlayer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello MediaPlayer!\n";

	string input="";
	do {
		cin >> input;
		if(input != "exit")
			cout << "input command :" <<  input << endl;
	} while (input != "exit");

	cout << "Au revoir!" << endl;
}

