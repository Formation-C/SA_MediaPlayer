// MediaPlayer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <algorithm> //for foreach
#include "Player.h"

using namespace std;

int main()
{
    std::cout << "Hello MediaPlayer!\n";

	Player* player = new Player();

	for_each(
		player->GetTracklist()->begin(),
		player->GetTracklist()->end(),
		[](string trackName /*param*/) {cout << trackName << endl; });
	

	string input="";
	do {
		cin >> input;
		if(input != "exit")
			cout << "input command :" <<  input << endl;
	} while (input != "exit");

	cout << "Au revoir!" << endl;
}

