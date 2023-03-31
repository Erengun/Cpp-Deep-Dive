/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:14:02 by egun              #+#    #+#             */
/*   Updated: 2023/03/31 15:14:06 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string str;
	
	std::cout << "Creating a zombie in stack" << std::endl;
	std::cout << "Give a name to a zombie: " << std::flush;
	std::cin >> str;
	Zombie stackZombie(str);
	stackZombie.announce();
	std::cout << std::endl;

	std::cout << "Creating a zombie in heap" << std::endl;
	std::cout << "Give a name to a zombie: " << std::flush;
	std::cin >> str;
	Zombie *heap_zombie = newZombie(str);
	heap_zombie->announce();
	delete heap_zombie;
	std::cout << std::endl;

	std::cout << "Creating a zombie with randomChump" << std::endl;
	std::cout << "Give a name to a zombie: " << std::flush;
	std::cin >> str;
	randomChump(str);
	std::cout << std::endl;

	return (0);
}