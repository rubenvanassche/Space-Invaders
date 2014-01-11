/**
 * BulletView.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLETVIEW_H_
#define BULLETVIEW_H_

#include "../entities/Bullet.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>

/**
 * @brief View representing a Bullet
 */
class BulletView : public View{
public:
	/**
	 * @brief Constructor for the Bullet View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the bullet instance
	 */
	BulletView(sf::RenderWindow* window, Assets* assets, Bullet* bullet) : View(window, assets), fBullet(bullet){};

	/**
	 * @brief Draw the Bullet
	 */
	void draw();

	/**
	 * @brief Returns the entity this view is connected to
	 *
	 * @return A pointer to the ScreenEntity
	 */
	ScreenEntity* getEntity(){return dynamic_cast<ScreenEntity*>(this->fBullet);};

	virtual ~BulletView();
private:
	Bullet* fBullet;
};

#endif /** BULLETVIEW_H_ */
