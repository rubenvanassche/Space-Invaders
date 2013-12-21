#include "Model.h"

int Model::move(int value, util::Direction direction){
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
