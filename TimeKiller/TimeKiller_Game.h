#pragma once
///===============================================================
//Holds all the include statements for the game 
///Makes the Game wrapper class 
//Last Modified: apr 18 2017 by: Anthony Yockey
///===============================================================
#include <SFML/Graphics.hpp>
#include <iostream>

//game class code From:
//http://www.gamefromscratch.com/page/Game-From-Scratch-CPP-Edition-Part-2.aspx
class Game
{
public:
	static void Start();

private:
	static bool isExiting();
	static void GameLoop();
	
	//eumerated type holds the game state
	enum GameState {
		Uninitilized, Paused, ShowingMenu, Playing, Exiting
	};
	static GameState _gameState;
	static sf::RenderWindow _mainWindow;
};

Game::Game()
{
}

Game::~Game()
{
}