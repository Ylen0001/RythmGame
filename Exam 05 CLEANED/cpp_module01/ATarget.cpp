/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:39:04 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:42:12 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){};

ATarget::ATarget(std::string type) : type(type){};

ATarget::~ATarget(){};

ATarget::ATarget(const ATarget& other)
{
	this->type = other.type;
}

ATarget& ATarget::operator=(const ATarget& other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

std::string ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}



