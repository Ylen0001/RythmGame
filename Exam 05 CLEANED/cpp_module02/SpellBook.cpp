/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:52:33 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 17:13:30 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
	for(int i = 0; i < 4; i++)
		this->book[i] = NULL;
}

SpellBook::~SpellBook() // A checker
{
	for(int i = 0; i < 4; i++)
		delete this->book[i];
}

SpellBook::SpellBook(const SpellBook& other)
{
	for(int i = 0; i < 4; i++)
	{
		delete this->book[i];
		this->book[i] = other.book[i];
	}
}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			delete this->book[i];
			this->book[i] = other.book[i];
		}	
	}
	return (*this);
}

void SpellBook::learnSpell(ASpell* spell)
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

void SpellBook::forgetSpell(const std::string& spellName)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->book[i] && this->book[i]->getName() == spellName)
		{
			delete this->book[i];
			this->book[i] = NULL;
			return;
		}
	}
}

ASpell* SpellBook::createSpell(const std::string& spellName)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->book[i] && this->book[i]->getName() == spellName)
		{
			return this->book[i]->clone();
		}
	}
	return NULL;
}


