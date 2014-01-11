#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include "Size.h"
#include <SFML/System/Vector2.hpp>

/*
 * @brief A namespace with usefull utilities
 */
namespace util{
	enum Direction{UP, DOWN, LEFT, RIGHT};

	/*
	 * @brief Move an object's size
	 *
	 * @param size The size object to work on
	 * @param direction The direction(UP, DOWN, LEFT, RIGHT) to move to
	 * @param movePixels The amount of pixels the size should move
	 */
	bool move(Size& size, Direction direction, int movePixels);
};

#endif /* POINT_H_ */
