

#include "../header/fontManager.hpp"
#include <stdexcept>

bool FontManager::loadFont(const std::string& key, const std::string& filePath) {
    sf::Font font;
    if (!font.openFromFile(filePath)) {
        return false;
    }
    fonts[key] = font;
    return true;
}

const sf::Font& FontManager::getFont(const std::string& key) const {
    auto it = fonts.find(key);
    if (it == fonts.end()) {
        throw std::runtime_error("Font not found: " + key);
    }
    return it->second;
}
