/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:53:44 by erengun           #+#    #+#             */
/*   Updated: 2023/03/29 16:53:46 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    ScavTrap();

public:
    ScavTrap( std::string name );
    ~ScavTrap();

    void    attack(std::string const& target);
    void    guardGate();
};

#endif // SCAVTRAP_HPP