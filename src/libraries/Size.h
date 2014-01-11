#ifndef SIZE_H_
#define SIZE_H_

#include <SFML/System/Vector2.hpp>
#include <iostream>

/**
 * @brief The Size Class
 */
class Size {
public:
	/**
	 * @brief A default Constructor for size
	 */
	Size();

	/**
	 * @brief A Constructor for size
	 *
	 * @param value The value to set the width and height of this Size
	 */
	Size(const int& value);

	/**
	 * @brief A Constructor for size
	 *
	 * @param width The width of the size
	 * @param height The Height of the size
	 */
	Size(const int& width, const int& height);

	/**
	 * @brief A Constructor for size
	 *
	 * @param width The width of the size
	 * @param height The Height of the size
	 * @param grabPoint The grabbing point for this size
	 */
	Size(const int& width, const int& height, const sf::Vector2f grabPoint);

	/**
	 * @brief A Copy Constructor for size
	 *
	 * @param s Another Size object
	 */
	Size(const Size& s);

	/**
	 * @brief overloading of << operator
	 */
	friend std::ostream& operator<<(std::ostream& out, Size& s);

	/**
	 * @brief overloading of == operator
	 *
	 * @param s1 The first Size
	 * @param s2 The Second Size
	 *
	 * @return True if the two size's are the same and false if not
	 */
	friend bool operator== (const Size& s1, const Size& s2);

	/**
	 * @brief The Assignment
	 *
	 * @param s The Second Size
	 */
	void operator= (const Size& s);

	/**
	 * @brief overloading of < operator
	 *
	 * @param s The Second Size
	 *
	 * @param A bool if the second Size is greater then the first
	 */
	bool operator< (const Size& s) const;

	/**
	 * @brief overloading of > operator
	 *
	 * @param s The Second Size
	 *
	 * @param A bool if the second Size is smaller then the first
	 */
	bool operator> (const Size& s) const;

	/**
	 * @brief overloading of <= operator
	 *
	 * @param s The Second Size
	 *
	 * @param A bool if the second Size is greater then or equal to the first
	 */
	bool operator<= (const Size& s) const;

	/**
	 * @brief overloading of => operator
	 *
	 * @param s The Second Size
	 *
	 * @param A bool if the second Size is smaller then or equal to the first
	 */
	bool operator>= (const Size& s) const;

	/**
	 * @brief check if a certain point lies inside the size
	 *
	 * @param point The point to check
	 *
	 * @return Bool which is true if the point lies in this size
	 */
	bool in(const sf::Vector2f point) const;

	/**
	 * Change the width and height of the size
	 *
 	 * @param width The new width of the size
	 * @param height The new Height of the size
	 */
	void set(const int& width, const int& height);

	/**
	 * Change the grabbing point of the size
	 *
	 * @param grabPoint The new grabbing point
	 */
	void set(const sf::Vector2f grabPoint);

	/**
	 * @Brief Get the width of the size
	 *
	 * @return An int representing the width of the size
	 */
	unsigned int getWidth() const;

	/**
	 * @Brief Get the height of the size
	 *
	 * @return An int representing the height of the size
	 */
	unsigned int getHeight() const;

	/**
	 * @Brief Get the grabbing pint of the size
	 *
	 * @return An sf::Vector2f representing the grabbing point
	 */
	sf::Vector2f getGrabPoint() const;

private:
	sf::Vector2f fGrabPoint;
	unsigned int fWidth;
	unsigned int fHeight;
};

#endif /*** SIZE_H_ */
