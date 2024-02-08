#include "Engine.h"


class Map;
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
	while (window.isOpen())
	{
		window.display();
	}
}