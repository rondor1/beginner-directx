#pragma once

class Graphics;

class Dude
{
public:
	void ClampDude();
	void DrawDude(Graphics& gfx);
public:
	int x = 400;
	int y = 300;
	int vx;
	int vy;
	static constexpr int width = 20;
	static constexpr int height = 20;
};