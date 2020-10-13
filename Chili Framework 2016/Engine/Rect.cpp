#include "Rect.h"
#include "Graphics.h"
#include "Dude.h"

void Rect::Init(int in_x, int in_y)
{
    x = in_x;
    y = in_y;
    eaten = false;
}

void Rect::DrawRandomRect(Graphics& gfx)
{
    gfx.DrawRect(x, y, width, height, 255, 0, 0);
}

void Rect::RectCollected(Dude& dude)
{
    int rectRight = x + width;
    int rectBottom = y + height;
    int dudeRight = dude.GetX() + dude.GetWidth();
    int dudeBottom = dude.GetY() + dude.GetHeight();

    eaten = x <= dudeRight && y <= dudeBottom
        && rectRight >= dude.GetX() && rectBottom >= dude.GetY();
}

bool Rect::isEaten() const
{
    return eaten;
}
