/*
 * SI.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "SI.h"

SI_Controller::SI_Controller(){
	this->screen = new ScreenController();
}

SI_Controller::~SI_Controller(){

}

SI_Model::SI_Model(){

}

SI_Model::~SI_Model(){

}

SI_View::SI_View(){

}

SI_View::~SI_View(){

}

SI_Factory::SI_Factory(){

}

SI_Factory::~SI_Factory(){

}

SI::SI() {
	this->controller = new SI_Controller();
	this->model = new SI_Model();
	this->view = new SI_View();
	this->factory  = new SI_Factory();
}

SI::~SI() {
	delete this->controller;
	delete this->model;
	delete this->view;
	delete this->factory;
}

