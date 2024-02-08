#pragma once
#include "SFML/Graphics.hpp"



class Map
{
private:
	int id;
	double x, y, h, w;
	sf::Color color;
};


class Player
{
private:
	double x,y,xms,yms,health,damage;
public:
	Player();
	virtual void attack();
	virtual void move();
	virtual void checkPosition();
};

class PlayerUsual : public Player 
{

};

class PlayerInvisible : public Player
{

};

class PlayerBoss : public Player
{

};

class PlayerSnake : public Player
{

};

class Game
{
private:
	Player player;
	sf::RenderWindow window;
public:
	void StartGameCycle();
};