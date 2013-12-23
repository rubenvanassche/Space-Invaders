#ifndef SIZE_H_
#define SIZE_H_

#include <SFML/System/Vector2.hpp>
#include <iostream>

class Size {
public:
	Size();
	// default constructor
	Size(const int& value);
	// constructor
	Size(const int& width, const int& height);

	Size(const int& width, const int& height, const sf::Vector2f grabPoint);

	Size(const Size& s);

	friend std::ostream& operator<<(std::ostream& out, Size& s);

	friend bool operator== (const Size& s1, const Size& s2);

	void operator= (const Size& s);

	bool operator< (const Size& s) const;

	bool operator> (const Size& s) const;

	bool operator<= (const Size& s) const;

	bool operator>= (const Size& s) const;

	bool in(const sf::Vector2f point) const;

	void set(const int& width, const int& height);

	void set(const sf::Vector2f grabPoint);

	unsigned int getWidth() const;

	unsigned int getHeight() const;

	sf::Vector2f getGrabPoint() const;

private:
	sf::Vector2f fGrabPoint;
	unsigned int fWidth;
	unsigned int fHeight;
};

#endif /* SIZE_H_ */
