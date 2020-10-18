#pragma once

typedef struct Location
{
    void Add(const Location& delta_loc)
    {
        x += delta_loc.x;
        y += delta_loc.y;
    }
    int x;
    int y;

}Location;