/*
 * Assets.cpp
 *
 *  Created on: 11 jan. 2014
 *      Author: Ruben
 */

#include "Assets.h"

Assets::Assets() {
	// TODO Auto-generated constructor stub

}

sf::Texture* Assets::getTexture(std::string file){
	// Is the texure already loaded
	if(this->fTextures.find(file) == this->fTextures.end()){
		// Nope so try to add it
		sf::Texture* tex = new sf::Texture;
		if(tex->loadFromFile(file) == false){
			throw std::runtime_error("Asset couldn't be found!");
		}

		this->fTextures[file] = tex;
		return tex;
	}else{
		return this->fTextures[file];
	}
}

sf::Font* Assets::getFont(std::string file){
	// Is the font already loaded
	if(this->fFonts.find(file) == this->fFonts.end()){
		// Nope so try to add it
		sf::Font* font = new sf::Font;
		if(font->loadFromFile(file) == false){
			throw std::runtime_error("Asset couldn't be found!");
		}

		this->fFonts[file] = font;
		return font;
	}else{
		return this->fFonts[file];
	}
}

Assets::~Assets() {
	for(auto it = this->fTextures.begin();it != this->fTextures.end();it++){
		delete it->second;
	}

	for(auto it = this->fFonts.begin();it != this->fFonts.end();it++){
		delete it->second;
	}

	this->fTextures.clear();
	this->fFonts.clear();
}

