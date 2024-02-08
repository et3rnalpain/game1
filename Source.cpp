#include "Engine.h"


class Map;
Map::Map()
{
	id = 0;
	x = y = -1;
	color = color.Black;
}
Map::Map(int id_)
{
	id = id_;
	switch (id)
	{
		case 1:
		{
			x = y = 0;
			color = color.Red;
		}break;
		case 2:
		{
			x = 500; y = 0;
			color = color.Yellow;
		}break;
		case 3:
		{
			x = 0; y = 500;
			color = color.Blue;
		}break;
		case 4:
		{
			x = y = 500;
			color = color.Green;
		}break;
	}
};
int Map::getId() 
{
	return id;
}
void Map::setId(int id) 
{
	this->id = id;
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
	std::random_shuffle(array[0], array[3]);
	for (int i = 0; i < 4; i++) 
	{
		maps[i].setId(array[i]);
	}
	while (window.isOpen())
	{
		window.display();
	}
}