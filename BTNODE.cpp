#include "Character.h"
#include "startGame.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "BTNODE.h"

using namespace std;




//builds binary tree (flowchart)
void BTNODE::buildFlowchart() 
{
    //Starting point (Queen request your aid)
    root = new BTNODE;
    root->option = "Start";
    //calls function to read script from lines "start" to "end"  
    root->action = [](){int start = 1, end = 9; scriptRead(start, end); };
   

    //left child (Accept queen's request)
    root->left = new BTNODE;
    root->left->option = "SerpentHybrid";
    root->left->action = [](){int start = 12, end = 21;scriptRead(start, end);};
   

    //right child (Refuse queen's request)
    root->right = new BTNODE;
    root->right->option = "ThornBeastLeader";
    root->right->action = []() {int start = 82, end = 96;scriptRead(start, end);};

    //left subtree of SerpentHybrid enemy (Use fire stone);
    root->left->left = new BTNODE; 
    root->left->left->option = "defeatedSerpents";
    root->left->left->action = []() 
        {
        int start = 23, end = 26;scriptRead(start, end);
        int start2 = 32, end2 = 37;scriptRead(start2, end2);
        };

    //right subtree of SerpentHybrid (Don't use fire stone);
    root->left->right = new BTNODE;
    root->left->right->option = "fleefromSerpents";
    root->left->right->action = []() {int start = 28, end = 37;scriptRead(start, end);};

    //subtree Sylphs of Mist (defeated serpent)
    root->left->left->left = new BTNODE; //Help Sylphs (Use Water Stone)
    root->left->left->left->option = "Best Ending A";
    root->left->left->left->action = []() {int start = 52, end = 57;scriptRead(start, end);};

    root->left->left->right = new BTNODE; //Don't Help Sylphs 
    root->left->left->right->option = "Neutral Ending A";
    root->left->left->right->action = []() {int start = 61, end = 68;scriptRead(start, end);};

    //subtree Sylphs of Mist (fleed from serpent)
    root->left->right->left = new BTNODE;//Help Sylphs (Use Water Stone)
    root->left->right->left->option = "Neutral Ending A";
    root->left->right->left->action = []() {int start = 61, end = 68;scriptRead(start, end);};

    root->left->right->right = new BTNODE;//Don't Help Sylphs
    root->left->right->right->option = "Bad Ending A";
    root->left->right->right->action = []() {int start = 72, end = 77;scriptRead(start, end);};


    //ThornBeasts subtree 
    root->right->left = new BTNODE;//(use shard)player buffed
    root->right->left->option = "thornBeastRetreated";
    root->right->left->action = []()
        {
            int start = 98, end = 101;scriptRead(start, end);
            int start2 = 108, end2 = 116;scriptRead(start2, end2);
        };

    root->right->right = new BTNODE;//(use roots)player debuffed
    root->right->right->option = "playerFleedBeasts";
    root->right->right->action = []() {int start = 103, end = 116;scriptRead(start, end);};

    //Mirelings subtree(ThornBeast retreated)
    root->right->left->left = new BTNODE;//(use water stone)
    root->right->left->left->option = "Best Ending B";
    root->right->left->left->action = []() {int start = 122, end = 123;scriptRead(start, end);};

    root->right->left->right = new BTNODE; //(don't use waterstone)
    root->right->left->right->option = "Neutral Ending B";
    root->right->left->right->action = []() {int start = 127, end = 129;scriptRead(start, end);};

    //Mirelings subtree(Player fleated)
    root->right->right->left = new BTNODE; //(use stone of Stillness)
    root->right->right->left->option = "Neutral Ending B";
    root->right->right->left->action = []() {int start = 125, end = 129;scriptRead(start, end);};

    root->right->right->right = new BTNODE;//(don't use stone of Stillness)
    root->right->right->right->option = "Worst Ending A";
    root->right->right->right->action = []() {int start = 132, end = 136;scriptRead(start, end);};

}


//Prints Binary tree in order
void BTNODE::printInOrder(BTNODE* p)
{
    if (p == nullptr)
    {
        return;
    }
    printInOrder(p->left);
    cout << p->option << endl;
    printInOrder(p->right);
}

