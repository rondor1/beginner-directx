#pragma once

class Graphics;
class Dude;

class Rect
{
public:
    void Init(int in_x, int in_y);
    void DrawRandomRect(Graphics& gfx);
    void RectCollected(Dude& dude);
    bool isEaten() const;
private:
    int x;
    int y;
    bool eaten = false;
    int width = 20;
    int height = 20;
};