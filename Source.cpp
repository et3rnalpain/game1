#include "Engine.h"


class Map;
Map::Map()
{
	id = 0;
	x = y = -1;
	color = color.Black;
}
int Map::getId() 
{
	return id;
}
void Map::setId(int id) 
{
	this->id = id;
	switch (id)
	{
	case 1:
	{
		color = color.Red;
	}break;
	case 2:
	{
		color = color.Yellow;
	}break;
	case 3:
	{
		color = color.Blue;
	}break;
	case 4:
	{
		color = color.Green;
	}break;
	}
}
void Map::setXY(int x_, int y_)
{
	x = x_;
	y = y_;
}
class Player;
Player::Player(){};
void Player::attack() 
{

};
void Player::move()
{

};
void Player::checkPosition()
{

};
class PlayerUsual;
class PlayerInvisible;
class PlayerBoss;
class PlayerSnake;
class Game;
void Game::StartGameCycle() 
{
	window.create(sf::VideoMode(1000, 1000), "Game");
	int array[4] = {1,2,3,4};
	std::random_shuffle(&array[0], &array[3]);
	for (int i = 0; i < 4; i++) 
	{
		maps[i].setId(array[i]);
	}
	while (window.isOpen())
	{
		window.display();
	}
}