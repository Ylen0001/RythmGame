/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:33:18 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:20:38 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){};

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects){};

ASpell::~ASpell(){};

ASpell::ASpell(const ASpell& other)
{
	this->name = other.name;
	this->effects = other.effects;
}

ASpell& ASpell::operator=(const ASpell& other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return (*this);
}

std::string ASpell::getName() const
{
	return this->name;
}

std::string ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}