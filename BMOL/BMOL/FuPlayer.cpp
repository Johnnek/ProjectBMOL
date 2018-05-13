#include "Header.h"

void Player::setID(int num)
{
	iID = num;
}	// set PlayerID
void Player::setPlayername(string name)
{
	sPlayername = name;
}	// set Nickname
int Player::getID()
{
	return iID;
}	// get PlayerID
string Player::getPlayername()
{
	return sPlayername;
}	// get Nickname

void Player::control()
{

}	// Funktion zur Steuerung? Leertaste für Bombe legen und Pfeiltasten zum Laufen, bzw. wasd und enter für Linkshänder???
