/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:26:46 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 18:20:08 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie( std::string name );
		~Zombie();
		void	announce();
		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif