/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:22:10 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 21:20:01 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies = zombieHorde(5, "Horde");

	for (int i=0; i<5; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}