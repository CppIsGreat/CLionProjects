//
// Created by Tristan Brindle on 17/10/2017.
//

#ifndef HOMEWORK1_MULTILINE_HPP
#define HOMEWORK1_MULTILINE_HPP

#include <vector>
#include "point.hpp"

struct multiline {

    multiline()
    {
        mline.clear();
        //std::cout << "multiline default constructor\n";
    }

/*    multiline (std::vector<point> points)
    {
        //std::cout << "Next multiline constructor\n";
    }*/

    unsigned long howbig();

    const point front();
    point back ();

    void clear();

    void append(const point&);

    double length();

    double line_len(const point& , const point& );

    ~multiline() {}
   /* {
        std::cout << "multiline destructor\n";
    }*/


    std::vector<point> mline {};

};

#endif //HOMEWORK1_MULTILINE_HPP
