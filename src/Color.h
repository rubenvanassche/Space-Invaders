/*
 * Color.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef COLOR_H_
#define COLOR_H_

class Color {
public:
	Color();
	Color(Color& color);
	Color(int red, int blue, int green);

	Color& operator=(Color& color);

	bool set(int red, int blue, int green);
	bool setRed(int red);
	bool setBlue(int blue);
	bool setGreen(int green);

	int getRed();
	int getBlue();
	int getGreen();

	virtual ~Color();
private:
	int fRed;
	int fBlue;
	int fGreen;
};

#endif /* COLOR_H_ */
