#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Field {
private:

};

class Player {
private:
	int iID;				// Player 1-4
	string sPlayername;		// Nickname
public:
	void setID(int num) 
	{
		iID = num;
	}	// set PlayerID
	void setPlayername(string name)	
	{
		sPlayername = name;
	}	// set Nickname
	int getID()
	{
		return iID;
	}	// get PlayerID
	string getPlayername()
	{
		return sPlayername;
	}	// get Nickname
};

class Bomb {
private:
	int iFirerange;		// Reichweite der Bombenexplosion
	int iBombamount;	// Anzahl der Bomben die man tragen kann
	float fBombtimer = 3; // 3 Sekunden bis zum explodieren der Bombe nach dem legen
public:
	void bombExplode();		// Funktion zum explodieren der Bombe
};