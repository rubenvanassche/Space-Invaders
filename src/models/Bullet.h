/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "../libraries/Model.h"
#include "../libraries/Utilities.h"

/*
 * @brief The Bullet model
 */
class Bullet : public Model {
public:
	Bullet(sf::Vector2f location, Config* config) : Model(location, config){};

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	//void move(util::Direction direction);

	virtual ~Bullet();
private:
};

#endif /* BULLET_H_ */
