/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:00:08 by ael-khni          #+#    #+#             */
/*   Updated: 2023/03/30 02:35:14 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fixed a(10)
_fractionalBits = 8

Fixed::Fixed(10.0) : _fixedPointValue(std::roundf(n * (1 << _fractionalBits)))
(1 << _fractionalBits) = 256
n * (1 << _fractionalBits) = 2560.0
std::roundf(2560.0) = 2560
_fixedPointValue = 2560

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits)

10 << 8 = 2560
_fixedPointValue = 2560


float Fixed::toFloat(void) const {
    return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}
this->getRawBits() = 2560
static_cast<float>(2560) = 2560.0
(1 << _fractionalBits) = 256
2560 / 256 = 10.0


int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}
this->_fixedPointValue = 2560
_fractionalBits = 8
2560 >> 8 = 10
*/

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "n << _fractionalBits: " << this->_fixedPointValue << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(std::roundf(n * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "n * ( 1 << _fractionalBits ): " << n * (1 << _fractionalBits) << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    // this->setRawBits(rhs.getRawBits());
    *this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}
