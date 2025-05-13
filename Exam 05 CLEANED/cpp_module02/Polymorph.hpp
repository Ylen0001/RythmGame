/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:45:48 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 12:22:01 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	private:
	public:
		Polymorph();
		~Polymorph();
		ASpell* clone() const;
};

#endif