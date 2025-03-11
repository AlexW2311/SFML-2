//
//  renderer.cpp
//  CMakeSFML-Prototype
//
//  Created by Alexander Williams on 3/10/25.
//

#include "../header/renderer.hpp"

void Renderer::addDrawable(const sf::Drawable& drawable){
    drawables.push_back(&drawable);
}
void Renderer::draw(sf::RenderWindow& window) {
    for (const auto* drawable : drawables) {
        window.draw(*drawable);
    }
}
