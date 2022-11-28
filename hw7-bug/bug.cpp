//c++ file which will have logic for member functions of header file.
//will access Bug class with function type + class name::function name().
#include "bug.h"

//logic for constructor function:
Bug::Bug(int initial_position)
{
    p = initial_position;
    direction = "right";
}

//logic for turn() function:
void Bug::turn()
{
     if (direction == "left")
     {
         direction =  "right";
     }
     else if (direction == "right")
     {
         direction = "left";
     }
}

//logic for move() function:
void Bug::move()
{
    if (direction == "right")
    {
        p = p + 1;
    }
    else if (direction == "left")
    {
        p = p - 1;
    }
}

//logic for get_position() function:
int Bug::get_position() const
{
    return p;
}