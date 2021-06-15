/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:09:46 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/15 15:30:28 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_raw = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int intParam) : _raw(intParam << _Bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatParam) : _raw(roundf(floatParam * (1 << _Bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawsBits(int const raw)
{
	_raw = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_raw / 256);
}

int Fixed::toInt(void) const
{
	return (_raw >> _Bits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}