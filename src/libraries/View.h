/*
 * View.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef VIEW_H_
#define VIEW_H_

#include "Color.h"

class View {
public:
	View();
	virtual ~View();
private:
	Color fColor;
};

#endif /* VIEW_H_ */
