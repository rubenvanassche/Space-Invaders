/*
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

class BulletView : public View{
public:
	BulletView(sf::RenderWindow* window, Assets* assets, Bullet* bullet) : View(window, assets), fBullet(bullet){};
	void draw();
	ScreenEntity* getEntity(){return dynamic_cast<ScreenEntity*>(this->fBullet);};
	virtual ~BulletView();
private:
	Bullet* fBullet;
};

#endif /* BULLETVIEW_H_ */
