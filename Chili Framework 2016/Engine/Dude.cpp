#include "Dude.h"
#include "Graphics.h"

bool Dude::CheckCollision(int objX, int objY, int objWidth, int objHeight)
{
    int right = x + width;
    int bottom = y + height;
    int objRight = objX + objWidth;
    int objBottom = objY + objHeight;

    return x <= objRight && objX <= right
        && objY <= bottom && y <= objBottom;
}

void Dude::ClampDude()
{

    const int right = x + width;
    const int bottom = y + height;

    if (x < 0)
    {
        x = 0;
    }
    else if (right >= Graphics::ScreenWidth)
    {
        x = (Graphics::ScreenWidth - 1) - width;
    }

    if (y < 0)
    {
        y = 0;
    }
    else if (bottom > Graphics::ScreenHeight)
    {
        y = (Graphics::ScreenHeight - 1) - height;
    }
}
 