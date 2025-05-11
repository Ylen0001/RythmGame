/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arrow.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoann <yoann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:32:35 by yoann             #+#    #+#             */
/*   Updated: 2025/05/12 00:32:38 by yoann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Arrow.cpp
#include "Arrow.hpp"
#include <cmath>

Arrow::Arrow(const sf::Texture& texture, sf::Vector2f startPos) {
    sprite.setTexture(texture);
    sprite.setOrigin(texture.getSize().x / 2.f, texture.getSize().y / 2.f);
    sprite.rotate(90);
    sprite.setPosition(startPos);
}

void Arrow::update(float deltaTime, float speed) {
    if (visible)
        sprite.move(0, speed * deltaTime);
}

void Arrow::draw(sf::RenderWindow& window) const {
    if (visible)
        window.draw(sprite);
}

bool Arrow::checkHit(const sf::CircleShape& target) {
    if (!visible) return false;

    sf::Vector2f a = sprite.getPosition();
    sf::Vector2f z = target.getPosition();
    float dx = a.x - z.x;
    float dy = a.y - z.y;
    float distance = std::sqrt(dx * dx + dy * dy);

    return distance < 40.0f; // HIT_RADIUS
}

void Arrow::hide() {
    visible = false;
}

bool Arrow::isVisible() const {
    return visible;
}
