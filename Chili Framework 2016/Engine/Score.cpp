#include "Score.h"
#include "Graphics.h"

void Score::DrawScore(Graphics& gfx)
{
    gfx.DrawRect(x, y, x + scaleFactor * gain, y , 0, 0, 255);
}

void Score::increaseScaleFactor()
{
    ++scaleFactor;
}

int Score::GetScaleFactor() const
{
    return scaleFactor;
}
