/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:30:18 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:31:21 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy"){};

Dummy::~Dummy(){};

ATarget* Dummy::clone() const
{
	return(new Dummy);
}