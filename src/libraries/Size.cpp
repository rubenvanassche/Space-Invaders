#include "Size.h"

Size::Size() {
	fWidth = 0;
	fHeight = 0;
	fGrabPoint.x = 0;
	fGrabPoint.y = 0;
}

Size::Size(const int& value) {
	fWidth = value;
	fHeight = value;
	fGrabPoint.x = 0;
	fGrabPoint.y = 0;
}

Size::Size(const int& width, const int& height) {
	fWidth = width;
	fHeight = height;
	fGrabPoint.x = 0;
	fGrabPoint.y = 0;
}

Size::Size(const int& width, const int& height, const sf::Vector2f grabPoint){
	fWidth = width;
	fHeight = height;
	fGrabPoint = grabPoint;
}

Size::Size(const Size& s) {
	fWidth = s.fWidth;
	fHeight = s.fHeight;
	fGrabPoint = s.fGrabPoint;
}

bool operator==(const Size& s1, const Size& s2) {
	if ( (s1.fHeight == s2.fHeight) && (s1.fWidth == s2.fWidth) ) {
		if(s1.fGrabPoint == s2.fGrabPoint){
			return true;
		}
	}

	return false;
}

void Size::operator=(const Size& s) {
	fWidth = s.fWidth;
	fHeight = s.fHeight;
	fGrabPoint = s.fGrabPoint;
	return;
}

bool Size::operator<(const Size& s) const {
	return fWidth*fHeight < s.fWidth*s.fHeight;
}

bool Size::operator>(const Size& s) const {
	return fWidth*fHeight > s.fWidth*s.fHeight;
}

bool Size::operator<=(const Size& s) const {
	return fWidth*fHeight <= s.fWidth*s.fHeight;
}

bool Size::operator>=(const Size& s) const {
	return fWidth*fHeight >= s.fWidth*s.fHeight;
}

bool Size::in(const sf::Vector2f point) const {
	if(point.x >= fGrabPoint.x and point.x <= fGrabPoint.x + fWidth){
		if(point.y >= fGrabPoint.y and point.y <= fGrabPoint.y + fHeight){
			return true;
		}
	}

	return false;
}

void Size::set(const int& width, const int& height) {
	fWidth = width;
	fHeight = height;
}

void Size::set(const sf::Vector2f grabPoint){
	this->fGrabPoint = grabPoint;
}

unsigned int Size::getWidth() const {
	return fWidth;
}

unsigned int Size::getHeight() const {
	return fHeight;
}

sf::Vector2f Size::getGrabPoint() const{
	return fGrabPoint;
}

std::ostream& operator<<(std::ostream& out, Size& s){
	out << "Size(" << s.getWidth() << ", " << s.getHeight() << ")  ---> (" << s.getGrabPoint().x << ", " << s.getGrabPoint().y << ")" << std::endl;
	return out;
}
