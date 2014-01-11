#include "ScreenEntity.h"
void ScreenEntity::move(util::Direction direction){
	util::move(this->fSize, direction, this->fMovePixels);
}

int ScreenEntity::move(int value, util::Direction direction){
	if(direction == util::UP){
		return value - this->fMovePixels;
	}else if(direction == util::DOWN){
		return value + this->fMovePixels;
	}else if(direction == util::LEFT){
		return value - this->fMovePixels;
	}else if(direction == util::RIGHT){
		return value + this->fMovePixels;
	}else{
		std::runtime_error("You can go only LEFT, RIGHT, UP, DOWN");
		return 0;
	}
}

bool ScreenEntity::collides(ScreenEntity* otherEntity){
	if(this->isDead()){
		// Can't colide if we're death
		return false;
	}

	Size otherEntitySize = otherEntity->getSize();

	// get the four bounds of the other Entity
	// 1 - 2
	// |   |
	// 3 - 4
	sf::Vector2f bound1 = otherEntity->getLocation() + sf::Vector2f(0, 0);
	sf::Vector2f bound2 = otherEntity->getLocation() + sf::Vector2f(otherEntitySize.getWidth(), 0);
	sf::Vector2f bound3 = otherEntity->getLocation() + sf::Vector2f(0, otherEntitySize.getHeight());
	sf::Vector2f bound4 = otherEntity->getLocation() + sf::Vector2f(otherEntitySize.getWidth(), otherEntitySize.getHeight());

	if(this->fSize.in(bound1)){
		return true;
	}

	if(this->fSize.in(bound2)){
		return true;
	}

	if(this->fSize.in(bound3)){
		return true;
	}

	if(this->fSize.in(bound4)){
		return true;
	}

	return false;
}

bool ScreenEntity::isDead(){
	if(fLifes <= 0){
		return true;
	}else{
		return false;
	}

}

void ScreenEntity::kill(bool forced){
	if(this->isDead()){
		return;
	}

	if(forced == true){
		this->fLifes = 0;
	}

	this->fLifes -= 1;
}
