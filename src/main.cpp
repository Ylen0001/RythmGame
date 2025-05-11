/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoann <yoann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:40:40 by yoann             #+#    #+#             */
/*   Updated: 2025/05/12 00:32:52 by yoann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Arrow.hpp"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const float SPEED = 100.0f;

sf::RenderWindow createWindow() {
    return sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Rythm!");
}

sf::CircleShape createTargetZone() {
    sf::CircleShape zone(30);
    zone.setFillColor(sf::Color::Black);
    zone.setOrigin(30, 30);
    zone.setScale(1.5f, 1.5f);
    zone.setPosition(115, 550);
    return zone;
}

int main() {
    sf::RenderWindow window = createWindow();

    sf::Texture texture;
    if (!texture.loadFromFile("assets/arrow.png")) {
        std::cerr << "Erreur de chargement de la texture." << std::endl;
        return -1;
    }

    Arrow arrow(texture, {115, 0});
    sf::CircleShape targetZone = createTargetZone();

    sf::Clock clock;

    while (window.isOpen()) {
        float deltaTime = clock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        arrow.update(deltaTime, SPEED);

        if (arrow.isVisible() && sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            if (arrow.checkHit(targetZone)) {
                arrow.hide();
                std::cout << "💥 HIT !" << std::endl;
            }
        }

        window.clear(sf::Color::Blue);
        window.draw(targetZone);
        arrow.draw(window);
        window.display();
    }

    return 0;
}
