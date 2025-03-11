//
//  renderer.hpp
//  CMakeSFML-Prototype
//
//  Created by Alexander Williams on 3/10/25.
//

#ifndef RENDERER_HPP
#define RENDERER_HPP


#include <SFML/Graphics.hpp>
#include <vector>

class Renderer {
public:
    void addDrawable(const sf::Drawable& drawable);
    void draw(sf::RenderWindow& window);
    
private:
    std::vector<const sf::Drawable*> drawables;
};

#endif


