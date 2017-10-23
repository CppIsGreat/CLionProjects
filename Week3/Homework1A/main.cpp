
//
// Created by Neil on 23/10/2017. Use Catch
//

#include "multiline.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"

// Test initialisation

const point p{3, 4};
const point q{1, 2};


TEST_CASE( "p equal_to(p)", "Point testing" ) {
    REQUIRE( p.equal_to(p));
}

TEST_CASE( "!p equal_to(q)", "Point testing" ) {
    REQUIRE( !p.equal_to(q));
}

TEST_CASE( "p !not_equal_to(p)", "Point testing" ) {
    REQUIRE( !p.not_equal_to(p));
}

TEST_CASE( "p not_equal_to(q)", "Point testing" ) {
    REQUIRE( p.not_equal_to(q));
}

TEST_CASE("Test length function", "multiline testing") {

    multiline ml{};

    ml.append({0, 0});
    ml.append({3, 4});
    ml.append({15, 9});
    ml.append({12, 5});

    REQUIRE(ml.howbig() == 4);
    REQUIRE(ml.length() == 23);
}

TEST_CASE("Test various functions", "multiline testing") {

    multiline ml{};

    const point start{1, 2};
    const point end{3, 4};

    ml.append(start);
    ml.append(end);

    REQUIRE(ml.howbig() == 2);

    // REQUIRE(ml.front() == {1, 2}); // Cannot use this

    REQUIRE(ml.front().equal_to(start));
    REQUIRE(ml.back().equal_to(end));

}



