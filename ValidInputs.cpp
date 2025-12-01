#include "ValidInputs.h"
#include "Character.h"
#include "MenuOptions.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>

using namespace std;

//Checks if menu option is valid input
int validMenuOption(int minValue, int maxValue)
{
	int userMenuInput;
	while (true)
	{
		cin >> userMenuInput; //Asking user for input

		if (cin.fail() || userMenuInput < minValue
			|| userMenuInput > maxValue
			|| cin.peek() != '\n')
		{
			clearScreen();
			cout << "Invalid option.\n";
			displayMenu();

			cout << "\n\nEnter a number " << minValue
				 << " to " << maxValue << ":" << endl;
			cin.clear(); // Resets error state
			// Discards input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break; //exits loop if input is valid
		}

	}

	return userMenuInput; //return valid user input
}

int validSpecies(int minNum, int maxNum)
{
	int speciesInput;
	while (true)
	{
		cin >> speciesInput; //Asking user for input

		if (cin.fail() || speciesInput < minNum
			|| speciesInput > maxNum
			|| cin.peek() != '\n')
		{
			clearScreen();
			cout << "Invalid option.\n";
			cout << "\n\nSelect your species: \n"
				<< "--------------------\n\n";

			cout << "1. Human" << endl
				<< "2. Elf" << endl
				<< "3. Dwarf" << endl
				<< "4. Vampire" << endl
				<< "5. Werewolf" << endl << endl
				<< "(Enter number 1-5)\n" << endl;


			cout << "\n\nEnter a number " << minNum
				<< " to " << maxNum << ":" << endl;
			cin.clear(); // Resets error state
			// Discards input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break; //exits loop if input is valid
		}

	}

	return speciesInput; //return valid user input
}



int validuserNum()//User input check, number must be 1 or two
{
	int userEntry;

	while (true)
	{
		cout << "\n(Enter in \"1\" or \"2\" )\n";
		cin >> userEntry;

		if (cin.fail() || userEntry > 2 || userEntry < 1)
		{
			cout << "Invalid number. \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		else
		{
			break;
		}
	}

	return userEntry;
}

//Checks if yes no inputs are valid
char validCharacter()
{
	char userCharInput;
	bool check = true;

	do
	{
		cin >> userCharInput;
		if (cin.fail() || cin.peek() != '\n')
		{
			cout << "Invalid Input.\n";

			cin.clear();//discard the input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (userCharInput != 'y' && userCharInput != 'n' && userCharInput != 'q')
		{
			cout << "Invalid Input.\n";
			cin.clear();//discard the input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			check = false;
		}

	} while (check == true);
	
	return userCharInput;
}

