/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:33:18 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 16:36:12 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
	HumanB();
public:
	HumanB(std::string name);
	~HumanB();
	void attack( void );
	void setWeapon(Weapon &weapon);
};

