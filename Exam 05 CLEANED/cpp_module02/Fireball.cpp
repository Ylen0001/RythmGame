/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:45:02 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:45:28 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp"){};

Fireball::~Fireball(){};

ASpell* Fireball::clone() const
{
	return(new Fireball);
}