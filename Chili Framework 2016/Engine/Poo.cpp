#include "Poo.h"
#include "Graphics.h"

void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	const int bottom = y + height;

	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

void Poo::CheckCollision(int objX, int objY, int objWidth, int objHeight)
{
	int right = x + width;
	int bottom = y + height;
	int objRight = objX + objWidth;
	int objBottom = objY + objHeight;

	isPooEaten = (x <= objRight && bottom >= objY
		&& right >= objX && y <= objBottom);
}
