#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
public:
	friend std::ostream& operator<< (std::ostream& stream, const Point& pointobject);

	friend bool operator== (const Point& p1, const Point& p2);

	friend bool operator!= (const Point& p1, const Point& p2);

	Point();
	// default constructor

	Point(const int& x, const int& y);
	// Constructor

	Point(const Point& p);
	// copy constructor

	void operator= (const Point& p);
	// copy by assignment

	void setX(const int& x);
	// change the x coordinates only

	void setY(const int& y);
	// change the y coordinates only


	void set(const int& x, const int& y);
	// change the x and y coordinates


	unsigned int getX() const;


	unsigned int getY() const;


private:
	unsigned int fX;
	unsigned int fY;
};

#endif /* POINT_H_ */
