/**
 * Assets.h
 *
 *  Created on: 11 jan. 2014
 *      Author: Ruben
 */

#ifndef ASSETS_H_
#define ASSETS_H_

#include <SFML/Graphics.hpp>
#include <string>
#include <map>

/**
 * @brief Class for storing assets and getting them without making endless copies
 */
class Assets {
public:
	/**
	 * @brief Constructor
	 */
	Assets();

	/**
	 * @brief get a texture
	 *
	 * @param file The path to the texture file
	 *
	 * @return A pointer to a texture
	 */
	sf::Texture* getTexture(std::string file);

	/**
	 * @brief get a font
	 *
	 * @param file The path to the font file
	 *
	 * @return A pointer to a font
	 */
	sf::Font* getFont(std::string file);

	virtual ~Assets();
private:
	std::map<std::string, sf::Texture*> fTextures;
	std::map<std::string, sf::Font*> fFonts;
};

#endif /*** ASSETS_H_ */
