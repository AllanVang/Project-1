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
		 << "2. Extras\n"
		 << "3. Credits\n"
		 << "4. Quit Game\n";

}



void gameSettings() //Extras
{
	cout << "\nThis is the extras section.\n"
		 << "This program runs order of n as it has to read from a script.txt\n"
		 << "It could run faster if the script was hard coded into the program "
		 << "but we didn't think that would've been very appropiate.\n"
		 << "After all this program doesn't handle any large computations\n\n";

}

void gameCredits()
{
	cout << "\nThis game was created by Allan Vang & Mai Lee Lee.\n\n";

	cout << fixed << right << setw(30) << "Thanks for checking it out!\n\n\n";
}

void clearScreen() {
	cout << "\033[2J\033[1;1H";  // clears screen using ANSI escape code
}
