/*
 * SI.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "SI.h"

SI_Controller::SI_Controller(SI* fsi) : si(fsi){
}

SI_Controller::~SI_Controller(){

}

SI_Model::SI_Model(SI* fsi) : si(fsi){
	this->guns = &this->fGuns;
	this->aliens = &this->fAliens;
	this->bullets = &this->fBullets;
	this->walls = &this->fWalls;
}

SI_Model::~SI_Model(){

}

SI_View::SI_View(SI* fsi) : si(fsi){
	this->views = &this->fViews;
}

SI_View::~SI_View(){

}


SI::SI() {

	// Start the whole thing
}

SI::~SI() {

}

