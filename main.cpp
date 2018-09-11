#include <iostream>

#include "map.hpp"
#include "int.hpp"
#include "snake.hpp"

using std::cout;
using std::endl;

int main() {
    using Map = MakeList<MakeList<Int<0>, Int<0>, Int<0>>::Result, MakeList<Int<1>, Int<0>, Int<0>>::Result>::Result;
    using Snake = MakeList<MakeCoord<1, 1>::Result, MakeCoord<0, 1>::Result, MakeCoord<0, 2>::Result, MakeCoord<1, 2>::Result>::Result;
    cout << IsDead<Direction::kLeftward, Snake, Map>::result << endl;
    using NewSnake = Run<Direction::kLeftward, Snake, Map>::Result;
    cout << typeid(NewSnake).name() << endl;
    return 0;
}
