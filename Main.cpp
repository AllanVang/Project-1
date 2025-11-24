/***************************
Project 
Allan Vang & Mail Lee Lee


***************************/

#include "Character.h"
#include "MenuOptions.h"
#include "ValidInputs.h"
#include "StartGame.h"
#include "BTNODE.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>


using namespace std;




int main()
{

    displayMenu();//Displays Game Menu
    

    {
        int menuChoice = validMenuOption(1, 3);

        switch (menuChoice)
        {
        case 1:
            // Discards current input
            cin.ignore(numeric_limits <streamsize>::max(), '\n');
            startGame(); //Starts the game
            break;
        case 2:
            gameSettings();
            break;
        case 3:
            gameCredits();
            break;
        }
    }
  
  


    return 0;

}


