/*
 * ScreenController.cpp
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#include "ScreenController.h"
void ScreenController::closeWindow(){
	this->fSI->window->close();
}

void ScreenController::redraw(){
	// Clean the Window
	this->fSI->window->clear();

	// Redraw all our views

	for(auto it = this->fViews->begin();it != this->fViews->end();it++){
		(*it)->draw();
	}

	// Ok let's print everything
	this->fSI->window->display();
}


ScreenController::~ScreenController() {
	// TODO Auto-generated destructor stub
}

