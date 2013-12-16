#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include <SFML/System/Vector2.hpp>

namespace util{
	enum Direction{UP, DOWN, LEFT, RIGHT};
	bool move(sf::Vector2f& location, Direction direction, int movePixels);
};

#endif /* POINT_H_ */
