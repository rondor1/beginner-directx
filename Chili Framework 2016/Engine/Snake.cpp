#include "Snake.h"

void Snake::Segment::InitHead(const Location& in_loc)
{
    segmentLoc = in_loc;
    segmentColor = headColor;
}

void Snake::Segment::InitBody()
{
    segmentColor = bodyColor;
}

void Snake::Segment::MoveBy(const Location& delta_loc)
{
    segmentLoc.Add(delta_loc);
}

void Snake::Segment::Draw(Board& brd) const
{
    brd.DrawCell(segmentLoc, segmentColor);
}

void Snake::Segment::Follow(const Segment& seg)
{
    segmentLoc = seg.segmentLoc;
}

Snake::Snake(const Location& in_loc)
{
    segments[0].InitHead(in_loc);
}

void Snake::MoveBy(const Location& delta_loc)
{
    for (int i = nSegmentsMax - 1; i > 0; --i)
    {
        segments[i].Follow(segments[i - 1]);
    }
    segments[0].MoveBy(delta_loc);
}

void Snake::DrawSnake(Board& brd) const
{
    for (int i = 0; i < nSegment; ++i)
    {
        segments[i].Draw(brd);
    }
}

void Snake::Grow()
{
    if (nSegmentsMax > nSegment)
    {
        segments[nSegment].InitBody();
        ++nSegment;
    }
}

bool Snake::GetSnakeSegmentCollision() const
{
    return snakeSegmentCollision;
}
