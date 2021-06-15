/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:09:43 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/15 14:42:01 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &fixed);

	Fixed(const int intParam);
	Fixed(const float floatParam);

	int getRawBits(void) const;
	void setRawsBits(int const raw);
	
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _raw;
	static int const _Bits = 8;
};

std::ostream &operator << (std::ostream &o, Fixed const &fixed);

#endif