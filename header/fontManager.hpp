//
//  fontManager.hpp
//  CMakeSFML-Prototype
//
//  Created by Alexander Williams on 3/10/25.
//

#ifndef FONT_MANAGER_HPP
#define FONT_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

class FontManager {
public:
    // Loads a font from file and associates it with a key.
    bool loadFont(const std::string& key, const std::string& filePath);

    // Retrieves the font associated with the key.
    const sf::Font& getFont(const std::string& key) const;

private:
    std::map<std::string, sf::Font> fonts;
};

#endif
