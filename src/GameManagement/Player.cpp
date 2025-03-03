#include "Player.h"

Player::Player()
{
    cout << "Player created" << endl;
}

Player::~Player()
{
    cout << "Player destroyed" << endl;
}

void Player::setRulerName(string name)
{
    cout << "Ruler name set to " << name << endl;
    rulerName = name;
}
