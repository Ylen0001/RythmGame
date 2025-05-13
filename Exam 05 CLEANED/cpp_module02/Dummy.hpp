/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:28:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:29:39 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	private:
	public:
		Dummy();
		~Dummy();
		ATarget* clone() const;
};

#endif