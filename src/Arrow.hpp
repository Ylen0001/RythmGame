/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arrow.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoann <yoann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:32:17 by yoann             #+#    #+#             */
/*   Updated: 2025/05/12 00:32:19 by yoann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <SFML/Graphics.hpp>

class Arrow {
public:
    Arrow(const sf::Texture& texture, sf::Vector2f startPos);

    void update(float deltaTime, float speed);
    void draw(sf::RenderWindow& window) const;
    bool isVisible() const;
    bool checkHit(const sf::CircleShape& target);
    void hide();

private:
    sf::Sprite sprite;
    bool visible = true;
};
