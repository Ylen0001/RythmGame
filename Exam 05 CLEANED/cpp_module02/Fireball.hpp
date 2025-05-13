/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:43:41 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:44:48 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	private:
	public:
		Fireball();
		~Fireball();
		ASpell* clone() const;
};

#endif