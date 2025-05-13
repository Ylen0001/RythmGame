/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:48:49 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 12:03:14 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"

class SpellBook
{
	private:
		SpellBook(const SpellBook& other);
		SpellBook& operator=(const SpellBook& other);
	public:
		ASpell* book[4];
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& spellName);
		ASpell* createSpell(const std::string& spellName);
};

#endif