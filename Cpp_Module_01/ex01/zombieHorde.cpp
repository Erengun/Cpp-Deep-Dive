/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:11:52 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 21:11:09 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Allocates n zombies on the heap and returns a pointer to the first one.
Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombies = new Zombie[N];
	for (int i=0; i<N; i++)
		zombies[i].setName(name);
	return (zombies);
}