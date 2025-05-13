/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:19:43 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:41:01 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){};

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
	for(int i = 0; i < 4; i++)
		this->book[i] = NULL;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& other)
{
	this->name = other.name;
	this->title = other.title;
}

Warlock& Warlock::operator=(const Warlock& other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->title = other.title;
	}
	return (*this);
}

std::string Warlock::getName() const
{
	return this->name;	
}

std::string Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(std::string title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; 
}

void Warlock::learnSpell(ASpell* spell)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->book[i] == NULL)
		{
			this->book[i] = spell;
			return;
		}
	}
}

void Warlock::forgetSpell(std::string spellName)
{
	int i = 0;
	while(i < 4 && this->book[i])
	{
		if(this->book[i]->getName() == spellName)
		{
			this->book[i] = NULL;
			return;
		}
		i++;
	}
}

void Warlock::launchSpell(std::string spellName, ATarget& target)
{
	int i = 0;
	while(i < 4 && this->book[i])
	{
		if(this->book[i]->getName() == spellName)
		{
			this->book[i]->launch(target);
			return;
		}
		i++;
	}
}

