#pragma once

class Graphics;

class Score
{
public:
    void DrawScore(Graphics& gfx);
    void increaseScaleFactor();
    int GetScaleFactor() const;
private:
    int x = 5;
    int y = 5;
    int scaleFactor = 0;
    static constexpr int gain = 10;
};