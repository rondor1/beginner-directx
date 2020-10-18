#include "Board.h"
#include "Graphics.h"

Board::Board(Graphics& gfx): gfx(gfx)
{

}

void Board::DrawCell(const Location& loc, const Color& c)
{
    gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::GetBoardWidth() const
{
    return width;
}

int Board::GetBoardHeight() const
{
    return height;
}