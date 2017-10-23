
#include <cmath>

#include "multiline.hpp"

// Append a point to the line
void multiline::append(const point& thePoint)
{
    mline.emplace_back(thePoint);
}

// How many elements in the vector?
unsigned long multiline::howbig()
{
    return (mline.size());
}

// Get the front point
const point multiline::front()
{
    return(mline.front());
}

// Get the back point
point multiline::back()
{
    return(mline.back());
}

// Clear the whole multi-line
void multiline::clear()
{
    mline.clear();
}

// Get the distance between two vectors (mathematical)
double multiline::line_len(const point& p1, const point& p2)
{
    return(sqrt(pow((p2.x - p1.x), 2.0) + pow((p2.y - p1.y), 2.0)));
}

// Get the length of the multiline
double multiline::length()
{
    double totalLength {0.0};

    // Accumulate the length of each segment
    for (auto i=1; i < mline.size(); i++)
    {
        // Vector algebra
        totalLength += line_len(mline.at(i - 1), mline.at(i));
    }

    return(totalLength);
}