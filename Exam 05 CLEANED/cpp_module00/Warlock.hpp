/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:15:47 by ylenoel           #+#    #+#             */
/*   Updated: 2025/05/13 10:28:31 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock 
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);
		public:
		~Warlock();
		Warlock(std::string name, std::string title);
		std::string getName() const;
		std::string getTitle() const;
		void setTitle(std::string title);
		void introduce() const;
};

#endif