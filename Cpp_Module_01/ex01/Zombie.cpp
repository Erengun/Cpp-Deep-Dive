/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:13:40 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 18:23:16 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie constructor
Zombie::Zombie()
{
	
}

// Zombie destructor
Zombie::~Zombie()
{
	std::cout << this->name << " is dead." << std::endl;
}

void 	Zombie::setName(std::string name)
{
	this->name = name;
}

// Zombie announces itself to the world
void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

