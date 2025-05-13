/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:19:43 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 10:28:18 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){};

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
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
