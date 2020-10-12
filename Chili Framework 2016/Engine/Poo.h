#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Update();
	void ProcessConsumption(int objX, int objY, int objWidth, int objHeight);
	void ProcessConsumption(const Dude& dude);
	void DrawPoo(Graphics& gfx);
public:
	int x;
	int y;
	int vx;
	int vy;
	bool isPooEaten = false;
	static constexpr int width = 24;
	static constexpr int height = 24;
};