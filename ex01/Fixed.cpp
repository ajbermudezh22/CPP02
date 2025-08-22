/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:40:15 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/22 11:40:15 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fract8bits = 8;

Fixed::Fixed() :_raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) :_raw(0)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_raw = rhs._raw;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_raw = n << _fract8bits;
}

Fixed::Fixed(float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_raw = static_cast<int>(roundf(f * (1 << _fract8bits)));
}

int Fixed::getRawBits ( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;
}

void Fixed::setRawBits ( int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
}

float Fixed::toFloat(void) const 
{
    return (static_cast<float>(this->_raw) / static_cast<float>(1 << _fract8bits));
}

int Fixed::toInt(void) const
{
    return (this->_raw >> _fract8bits);
}

std::ostream& operator<<(std::ostream&os, const Fixed& fx)
{
    os << fx.toFloat();
    return (os);
}
