#include "Utilities.h"


bool util::move(sf::Vector2f& location, Direction direction, int movePixels){
	if(direction == UP){
		location.y += movePixels;
		return true;
	}else if(direction == DOWN){
		location.y -= movePixels;
		return true;
	}else if(direction == LEFT){
		location.x -= movePixels;
		return true;
	}else if(direction == RIGHT){
		location.x += movePixels;
		return true;
	}else{
		return false;
	}
}
