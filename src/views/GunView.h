/*
 * GunView.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNVIEW_H_
#define GUNVIEW_H_

#include "../models/Gun.h"

class GunView {
public:
	GunView(Gun* gun);
	virtual ~GunView();
private:
	Gun* fGun = nullptr;

};

#endif /* GUNVIEW_H_ */
