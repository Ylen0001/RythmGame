/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:09:46 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 12:12:56 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGET_GENERATOR_HPP
#define TARGET_GENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		ATarget* targets[4];
		TargetGenerator(const TargetGenerator& other);
		TargetGenerator& operator=(const TargetGenerator& other);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* target);
		void forgetTargetType(const std::string& targetType);
		ATarget* createTarget(const std::string& targetType);
};

#endif