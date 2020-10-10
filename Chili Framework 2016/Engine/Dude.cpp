#include "Dude.h"
#include "Graphics.h"

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
 