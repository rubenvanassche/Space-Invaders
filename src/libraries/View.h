/*
 * View.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef VIEW_H_
#define VIEW_H_

#include <SFML/Graphics.hpp>
#include "ScreenEntity.h"
#include "Assets.h"
#include <memory>

class View {
public:
	View(sf::RenderWindow* window, Assets* assets) : fAssets(assets), fWindow(window){};
	virtual void draw() =0;
	virtual ScreenEntity* getEntity(){return nullptr;};
	virtual ~View(){};
protected:
	sf::RenderWindow* fWindow;
	Assets* fAssets;
};

#endif /* VIEW_H_ */
