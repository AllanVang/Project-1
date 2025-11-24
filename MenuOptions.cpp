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
		 << "\n LeeVentures \n"
		 << "------------\n\n"
		 << "1. Start Game\n"
		 << "2. Settings\n"
		 << "3. Credits\n";

}



void gameSettings()
{
	cout << "\nThis is the menu settings... There's not much here... yet.\n";
}

void gameCredits()
{
	cout << "\nThis game was created by Allan Vang & Mai Lee Lee.\n\n";

	cout << fixed << right << setw(30) << "Thanks for checking it out!\n\n\n";
}

void clearScreen() {
	cout << "\033[2J\033[1;1H";  // clears screen using ANSI escape code
}
