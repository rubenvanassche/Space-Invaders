/*
 * BulletView.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLETVIEW_H_
#define BULLETVIEW_H_

#include "../models/Bullet.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>

class BulletView : public View{
public:
	BulletView(sf::RenderWindow* window, Bullet* bullet) : View(window), fBullet(bullet){};
	void draw();
	virtual ~BulletView();
private:
	Bullet* fBullet;
};

#endif /* BULLETVIEW_H_ */
