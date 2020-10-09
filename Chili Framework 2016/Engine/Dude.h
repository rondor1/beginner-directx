#pragma once

class Dude
{
public:
	bool CheckCollision(int objX, int objY, int objWidth, int objHeight);
	void ClampDude();
public:
	int x = 400;
	int y = 300;
	int vx;
	int vy;
	static constexpr int width = 20;
	static constexpr int height = 20;
};