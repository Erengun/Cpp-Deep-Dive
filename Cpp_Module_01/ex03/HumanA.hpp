/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:28:05 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 16:32:22 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
	HumanA();

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack( void );
};

