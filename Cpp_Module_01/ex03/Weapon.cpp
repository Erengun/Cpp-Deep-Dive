/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:26:56 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 16:42:13 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->setType(type);
}

Weapon::~Weapon() {
}

const  std::string& Weapon::getType( void ) {
    return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}