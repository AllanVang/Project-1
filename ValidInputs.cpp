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

