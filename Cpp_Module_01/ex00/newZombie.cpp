/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:14:43 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 16:18:09 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// creates a new zombie and returns a pointer to it.
Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}