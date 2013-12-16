#include "Size.h"


bool operator== (const Size& s1, const Size& s2) {

	if ( (s1.fHeight == s2.fHeight) && (s1.fWidth == s2.fWidth) ) {
		return true;
	}
	return false;
}

Size::Size() {
	fWidth = 1;
	fHeight = 1;
}

Size::Size(const int& value) {
	fWidth = value;
	fHeight = value;
}

Size::Size(const int& width, const int& height) {
	fWidth = width;
	fHeight = height;
}

Size::Size(const Size& s) {
	fWidth = s.fWidth;
	fHeight = s.fHeight;
}

void Size::operator= (const Size& s) {

	fWidth = s.fWidth;
	fHeight = s.fHeight;
	return;
}

void Size::set(const int& width, const int& height) {

	fWidth = width;
	fHeight = height;

}

unsigned int Size::getWidth() const {
	return fWidth;
}

unsigned int Size::getHeight() const {
	return fHeight;
}
