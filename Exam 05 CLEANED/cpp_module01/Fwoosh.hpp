/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:21:12 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:26:26 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	private:
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone() const;
};

#endif