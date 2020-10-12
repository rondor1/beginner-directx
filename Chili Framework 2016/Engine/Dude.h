#pragma once

class Graphics;

class Dude
{
public:
	Dude(int in_x, int in_y, int in_vx, int in_vy);
	void MoveDude(int in_vx, int in_vy);
	void ClampDude();
	void DrawDude(Graphics& gfx);
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
	void SetVX(int in_vx);
	void SetVY(int in_vy);
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 20;
	static constexpr int height = 20;
};