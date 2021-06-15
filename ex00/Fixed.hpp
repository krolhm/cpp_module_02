/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:53:43 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/15 15:30:47 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &fixed);

        int getRawBits(void) const;
        void setRawsBits(int const raw);

    private:
        int _raw;
        static int const _Bits = 8;
};

#endif