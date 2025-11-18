#include "MenuOptions.h"
#include "Character.h"
#include "ValidInputs.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

void displayMenu()
{
	cout << endl;
	cout << "------------"
		 << "\n LeeVenture \n"
		 << "------------\n\n"
		 << "1. Start Game\n"
		 << "2. Settings\n"
		 << "3. Credits\n";

}



void gameSettings()
{
}

void gameCredits()
{
	cout << "\nThis game was created by Allan Vang & Mai Lee Lee.\n\n";

	cout << fixed << right << setw(30) << "Thanks for playing!\n\n\n";
}

