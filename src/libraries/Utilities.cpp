#include "Utilities.h"


bool util::move(Size& size, Direction direction, int movePixels){
	sf::Vector2f location = size.getGrabPoint();
	if(direction == UP){
		location.y -= movePixels;
		size.set(location);
		return true;
	}else if(direction == DOWN){
		location.y += movePixels;
		size.set(location);
		return true;
	}else if(direction == LEFT){
		location.x -= movePixels;
		size.set(location);
		return true;
	}else if(direction == RIGHT){
		location.x += movePixels;
		size.set(location);
		return true;
	}else{
		return false;
	}
}
