/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:15:50 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 16:18:24 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// creates a new zombie. Zombie announces itself.
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}