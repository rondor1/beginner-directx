#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Update();
	void ProcessConsumption(int objX, int objY, int objWidth, int objHeight);
	void ProcessConsumption(const Dude& dude);
	void DrawPoo(Graphics& gfx);
	bool isEaten() const;
private:
	int x;
	int y;
	int vx;
	int vy;
	bool isPooEaten = false;
	static constexpr int width = 24;
	static constexpr int height = 24;
};