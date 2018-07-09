#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

#define GAMEX[16]
#define GAMEY[16]

class Field {
private:

};

class Player {
private:
	int iID;				// Player 1-4
	string sPlayername;		// Nickname
public:
	void setID(int num);				// set PlayerID
	void setPlayername(string name);	// set Nickname
	int getID();						// get PlayerID
	string getPlayername();				// get Nickname

	void control(); // Funktion zur Steuerung? Leertaste für Bombe legen und Pfeiltasten zum Laufen, bzw. wasd und enter für Linkshänder???
};

class Bomb {
private:
	int iFirerange;		// Reichweite der Bombenexplosion
	int iBombamount;	// Anzahl der Bomben die man tragen kann
	static float fBombtimer = 3; // 3 Sekunden bis zum explodieren der Bombe nach dem legen
	// int BombType; // Spaeter um Bomben z haben die durch mauern gehen etc
	Bomb() {
		iFirerange = 3;
		iBombamount = 2;
	}
public:
	void bombExplode();		// Funktion zum explodieren der Bombe
};

class MAP
{
	unsigned char *aField; // Zeiger damit man die Mapgroesse 'onthefly' ändern kann :p unsigned char weil wir nur 1 byte brauchen ( 255 werte für feldstatus.... )
	int iSpecial; // Spezialeffekte
	// char * Soundfile;
	MAP( int x, int y, int effect/* , char* Sound */ ) // Konstruktor...Reserviert Speicher für die Map je nach groesse..
	{
		aField = new unsigned char(x*y);
		iSpecial = effect;
		// Zugriff auf einzelne felder kann später durch field[x][y] erfolgen dadurch wie mehrdimensionale arrays gespeichert werden
		//int len=strlen( Sound );
		// Soundfile = new char[ len+1 ];
		// strcpy_s<len+1>( Soundfile, Sound );

		// Map initialisieren mit Werten für Walkable etc...
	}
};