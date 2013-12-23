#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include "Size.h"
#include <SFML/System/Vector2.hpp>

namespace util{
	enum Direction{UP, DOWN, LEFT, RIGHT};
	bool move(Size& size, Direction direction, int movePixels);
};

#endif /* POINT_H_ */
