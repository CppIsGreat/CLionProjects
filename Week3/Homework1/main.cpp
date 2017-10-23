#include "point.hpp"
#include "multiline.hpp"

#include <cassert>

// Test
void test_multiline(){

    multiline ml{};

    ml.clear();

    // Load up the data
    ml.append({0, 0});
    ml.append({3, 4});
    ml.append({15, 9});
    ml.append({12, 5});

    assert(ml.length() == 23);

}

int main()
{
    multiline ml{};

    const point start{1, 2};
    const point end{3, 4};

    ml.append(start);
    ml.append(end);

    std::cout << "There are " << ml.howbig() << " elements\n";

    std::cout << "The back is  : " << ml.back() << '\n';
    std::cout << "The front is : " << ml.front() << '\n';

    // Clear out and start again
    ml.clear();

    ml.append({0, 0});
    ml.append({3, 4});
    ml.append({15, 9});
    ml.append({12, 5});

    std::cout << "There are " << ml.howbig() << " elements\n";

    std::cout << "The total length is : " << ml.length() << '\n';

    test_multiline();

}
