/*
 * View.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef VIEW_H_
#define VIEW_H_

#include <SFML/Graphics.hpp>
#include <memory>

class View {
public:
	View(sf::RenderWindow* window) : fWindow(window){};
	virtual void draw() =0;
	virtual ~View(){};
protected:
	sf::RenderWindow* fWindow;
};

#endif /* VIEW_H_ */
