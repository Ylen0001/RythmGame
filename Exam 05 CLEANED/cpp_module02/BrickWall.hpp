/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:46:56 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:47:33 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	private:
	public:
		BrickWall();
		~BrickWall();
		ATarget* clone() const;
};

#endif