/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:37:27 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 11:20:15 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget
{
	private:
		std::string type;
	public:
		ATarget();
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget(const ATarget& other);
		ATarget& operator=(const ATarget& other);
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell& spell) const;
};


#endif