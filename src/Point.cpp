/*
 * Point.cpp
 *
 * @author:		Stijn Wouters - 20121136 - stijn.wouters2@student.ua.ac.be
 * @version:	1.0
 * @date:		Friday 15 March 2013
 * 
 */

#include "Point.h"

std::ostream& operator<< (std::ostream& stream, const Point& pointobject) {
	stream << "(" << pointobject.fX << ", " << pointobject.fY << ")";
	return stream;
}

bool operator== (const Point& p1, const Point& p2) {
if ( (p1.fX == p2.fX) && (p1.fY == p2.fY) ) {
		return true;
	}
	return false;
}

bool operator!= (const Point& p1, const Point& p2) {
if ( (p1.fX == p2.fX) && (p1.fY == p2.fY) ) {
		return false;
	}
	return true;
}

Point::Point() {
	fX = 0;
	fY = 0;

}

Point::Point(const int& x, const int& y) {
	fX = x;
	fY = y;
}

Point::Point(const Point& p) {
	fX = p.fX;
	fY = p.fY;
}

void Point::operator= (const Point& p) {
	fX = p.fX;
	fY = p.fY;
	return;
}


void Point::setX(const int& x) {
	fX = x;
	return;
}

void Point::setY(const int& y) {
	fY = y;
}

void Point::set(const int& x, const int& y) {
	fX = x;
	fY = y;
	return;
}

unsigned int Point::getX() const {
	return fX;
}

unsigned int Point::getY() const {
	return fY;
}
