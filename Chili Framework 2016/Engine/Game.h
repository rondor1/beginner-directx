/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	void DrawDude(int x, int y);
	void DrawPoo(int x, int y);
	void DrawStartScreen(int x, int y);
	void DrawGameOver(int x, int y);
	int ClampScreenX(int x, int widht);
	int ClampScreenY(int y, int height);
	bool CheckCollision(int x0, int y0, int width0, int height0,
						int x1, int y1, int height1, int width1);
	bool DetectBoundaryHitX(int currentCoordinateX, int width, bool currentDirection);
	bool DetectBoundaryHitY(int currentCoordinateY, int height, bool currentDirection);
	void MovePoo(int& x, int& y, bool currentDirectionX, bool currentDirectionY);
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/********************************/
	int dudeX = 400;
	int dudeY = 300;
	int dudeWidth = 20;
	int dudeHeight = 20;
	int poo0X = 340;
	int poo0Y = 215;
	bool isPoo0Eaten = false;
	int poo1X = 170;
	int poo1Y = 560;
	bool isPoo1Eaten = false;
	int poo2X = 220;
	int poo2Y = 220;
	bool isPoo2Eaten = false;
	int pooWidth = 24;
	int pooHeight = 24;
	bool isGameStarted = false;
	bool xBoundaryPoo0 = false;
	bool yBoundaryPoo0 = false;
	bool xBoundaryPoo1 = false;
	bool yBoundaryPoo1 = false;
	bool xBoundaryPoo2 = false;
	bool yBoundaryPoo2 = false;
};