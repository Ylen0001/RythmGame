/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:26:32 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:27:46 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){};

Fwoosh::~Fwoosh(){};

ASpell* Fwoosh::clone() const
{
	return(new Fwoosh);
}