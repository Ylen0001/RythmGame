/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:13:04 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 17:11:16 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include "ATarget.hpp"
#include "BrickWall.hpp"

TargetGenerator::TargetGenerator()
{
	for(int i = 0; i < 4; i++)
		this->targets[i] = NULL;
}

TargetGenerator::~TargetGenerator()
{
	// for(int i = 0; i < 4; i++)
	// 	if(this->targets[i])
	// 		delete this->targets[i];
}

TargetGenerator::TargetGenerator(const TargetGenerator& other)
{
	for(int i = 0; i < 4; i++)
	{
		delete this->targets[i];
		this->targets[i] = other.targets[i];
	}
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			delete this->targets[i];
			this->targets[i] = other.targets[i];
		}	
	}
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->targets[i] == NULL)
		{
			this->targets[i] = target;
			return;
		}
	}
}

void TargetGenerator::forgetTargetType(const std::string& targetType)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->targets[i] && this->targets[i]->getType() == targetType)
		{
			delete this->targets[i];
			this->targets[i] = NULL;
			return;
		}
	}
}

ATarget* TargetGenerator::createTarget(const std::string& TargetType)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->targets[i]->getType() == TargetType)
		{
			return(this->targets[i]->clone());
		}
	}
	return NULL;
}