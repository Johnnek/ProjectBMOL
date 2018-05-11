#pragma once
#include <iostream>
#include <string>

using namespace std;

class Field {
private:

};

class Player {
private:
	int iID;				// Player 1-4
	string sPlayername;		// Nickname
public:
	void setID();			// set PlayerID
	void setPlayername();	// set Nickname

	int getID();			// get PlayerID
	string getPlayername();	// get Nickname
};