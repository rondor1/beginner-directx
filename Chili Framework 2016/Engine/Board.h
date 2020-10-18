#pragma once
#include "Board.h"
#include "Location.h"
#include "Graphics.h"

class Board
{
public:
    Board(Graphics& gfx);
    void DrawCell(const Location& loc, const Color& c);
    int GetBoardWidth() const;
    int GetBoardHeight() const;
private:
    static constexpr int dimension = 20;
    static constexpr int width = 10;
    static constexpr int height = 10;
    Graphics& gfx;
};