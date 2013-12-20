/*
 * ScreenController.cpp
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#include "ScreenController.h"
void ScreenController::closeWindow(){
	this->fWindow->close();
}

void ScreenController::redraw(){
	// Clean the Window
	this->fWindow->clear();

	// Redraw all our views
	for(auto i: *(this->fViews)){
		i->draw();
	}

	// Ok let's print everything
	this->fWindow->display();
}

ScreenController::~ScreenController() {
	// TODO Auto-generated destructor stub
}

