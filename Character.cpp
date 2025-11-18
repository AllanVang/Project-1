#include "Character.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;


Character::Character() {} //default constructor

//Setting private class objects same as getters
Character::Character(string charName, string charGender, string charSpecies)
	: Name(charName), Gender(charGender), Species(charSpecies){}

//Setter function
void Character::setCharacter(string &charName, string &charGender, string &charSpecies)
{
	Name = charName;
	Gender = charGender;
	Species = charSpecies;
}


string Character::getName()
{
	return Name;
}

string Character::getGender()
{
	return Gender;
}

string Character::getSpecies()
{
	return Species;
}

 

