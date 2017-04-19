#pragma once
#include "TimeKiller_Game.h"
using sf::Vector2f;

//base class for a character
class character
{
public:
	character();
	virtual ~character();

	Vector2f getPosition() const;
	bool getStatus()const;

	void setPosition(Vector2f nPos);
	void setDead();



protected:
	Vector2f Cposition; //holds char position
	bool CisDead; //holds weather the character is dead or not
};

character::character()
{
}

character::~character()
{
}
