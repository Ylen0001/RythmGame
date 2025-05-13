/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:47:57 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 17:10:33 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall"){};

BrickWall::~BrickWall(){};

ATarget* BrickWall::clone() const
{
	return(new BrickWall);
}
