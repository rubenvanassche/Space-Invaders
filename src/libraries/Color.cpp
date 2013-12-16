/*
 * Color.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Color.h"

Color::Color(){
	fRed = 0;
	fBlue = 0;
	fGreen = 0;
}

Color::Color(Color& color){
	fRed = color.getRed();
	fBlue = color.getBlue();
	fGreen = color.getGreen();
}

Color::Color(int red, int blue, int green){
	fRed = 0;
	fBlue = 0;
	fGreen = 0;
	this->set(red, blue, green);
}

Color& Color::operator=(Color& color){
	fRed = color.getRed();
	fBlue = color.getBlue();
	fGreen = color.getGreen();

	return *this;
}

bool Color::set(int red, int blue, int green){
	if(this->setRed(red) == false){
		return false;
	}

	if(this->setBlue(blue) == false){
		return false;
	}

	if(this->setGreen(green) == false){
		return false;
	}

	return true;
}

bool Color::setRed(int red){
	if(red >= 0 and red <= 255){
		fRed = red;
		return false;
	}else{
		return false;
	}
}

bool Color::setBlue(int blue){
	if(blue >= 0 and blue <= 255){
		fBlue = blue;
		return false;
	}else{
		return false;
	}
}

bool Color::setGreen(int green){
	if(green >= 0 and green <= 255){
		fGreen = green;
		return false;
	}else{
		return false;
	}
}

int Color::getRed(){
	return fRed;
}

int Color::getBlue(){
	return fBlue;
}

int Color::getGreen(){
	return fGreen;
}

Color::~Color() {
	// TODO Auto-generated destructor stub
}
