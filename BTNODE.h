#pragma once
#include <string>
#include <iostream>
#include "StartGame.h"


using namespace std;

struct BTNODE
{
	string option;
	BTNODE* left = nullptr;
	BTNODE* right = nullptr;
	BTNODE* root = nullptr;
	

	
	void (*action)();
	void buildFlowchart();
	void printInOrder(BTNODE* p);

};