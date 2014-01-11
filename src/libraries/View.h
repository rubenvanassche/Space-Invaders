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

/*
 * @brief The Library for views
 */
class View {
public:
	/*
	 * @brief The constructor for View
	 *
	 * @param window The window the view should be drawn on
	 * @param assets The assets object
	 */
	View(sf::RenderWindow* window, Assets* assets) : fAssets(assets), fWindow(window){};

	/*
	 * @brief Draw this view to the window
	 */
	virtual void draw() =0;

	/*
	 * @brief Returns the entity this view is connected to
	 *
	 * @return A pointer to the ScreenEntity
	 */
	virtual ScreenEntity* getEntity(){return nullptr;};

	virtual ~View(){};
protected:
	sf::RenderWindow* fWindow;
	Assets* fAssets;
};

#endif /* VIEW_H_ */
