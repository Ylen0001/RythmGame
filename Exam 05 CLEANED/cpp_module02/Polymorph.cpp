/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:46:17 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:46:45 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter"){};

Polymorph::~Polymorph(){};

ASpell* Polymorph::clone() const
{
	return(new Polymorph);
}