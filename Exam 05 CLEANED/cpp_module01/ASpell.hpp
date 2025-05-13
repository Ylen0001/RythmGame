/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:30:19 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:20:45 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell(const ASpell& other);
		ASpell& operator=(const ASpell& other);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget& target) const;
	};


#endif