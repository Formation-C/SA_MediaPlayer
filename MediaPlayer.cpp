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
		
		try {

			if (input == "play")
			{
				player->GetCurState()->onPlay();
			}
			else if (input == "stop")
			{
				player->GetCurState()->onStop();

			}
			else if (input == "next")
			{
				
				player->GetCurState()->onNext();

			}
			else
			{
				cout << "command unknown" << endl;
			}
		}
		catch (char const* errorMessage)
		{
			cout << "Error: "  << errorMessage << endl;
		}


	} while (input != "exit");

	string s = "SALUT";
		string t = "SALUT";
		t[0] = 'x';
		s = 'N';
		cout << s << endl;
		cout << t << endl;
	cout << "Au revoir!" << endl;

}

