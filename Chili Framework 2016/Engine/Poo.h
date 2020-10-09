#pragma once

class Poo
{
public:
	void Update();
public:
	int x;
	int y;
	int vx;
	int vy;
	bool isPooEaten = false;
	static constexpr int width = 24;
	static constexpr int height = 24;
};