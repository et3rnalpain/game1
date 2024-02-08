#pragma once
#include "SFML/Graphics.hpp"



class Map
{
private:
	int id;
	double x, y, h = 500, w = 500;
	sf::Color color;
};


class Player
{
private:
	double x,y,ms,health,damage;
	bool invis;
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
	Map* maps = new Map[4];
public:
	void StartGameCycle();
};