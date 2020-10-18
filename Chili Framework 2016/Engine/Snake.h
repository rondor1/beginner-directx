#pragma once

#include "Graphics.h"
#include "Board.h"
#include "Location.h"

class Snake
{
private:
    class Segment
    {
    private:
        Location segmentLoc;
        Color segmentColor;
        bool hasColided = false;
    public:
        void InitHead(const Location& in_loc);
        void InitBody();
        void MoveBy(const Location& delta_loc);
        void Draw(Board& brd) const;
        void Follow(const Segment& seg);
    };
public:
    Snake(const Location& in_loc);
    void MoveBy(const Location& delta_loc);
    void DrawSnake(Board& brd) const;
    void Grow();
    bool GetSnakeSegmentCollision() const;
private:
    static constexpr Color headColor = Colors::Yellow;
    static constexpr Color bodyColor = Colors::Green;
    static constexpr int nSegmentsMax = 100; // Maximum number of segments
    int nSegment = 1; //Current number of segments
    Segment segments[nSegmentsMax]; // Array with all snake segments
    bool snakeSegmentCollision = false;
};