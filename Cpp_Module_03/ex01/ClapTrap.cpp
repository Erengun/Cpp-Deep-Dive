/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:39:16 by erengun           #+#    #+#             */
/*   Updated: 2023/03/29 16:50:00 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destroyed (destructor)" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!\nCant't attack" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points left!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points left!" << std::endl;
}
