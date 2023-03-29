/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:53:53 by erengun           #+#    #+#             */
/*   Updated: 2023/03/29 16:53:55 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "| FragTrap | - " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "| FragTrap | - " << this->_name << " destructed." << std::endl;
}

void    FragTrap::highFive( void ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "| FragTrap | - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << this->_name << " high fives everybody." << std::endl;
    this->_energyPoints -= 1;
    std::cout << "| FragTrap | - " << this->_name << " has " << this->_energyPoints << " energy points left." << std::endl;
}