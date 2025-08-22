/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:40:18 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/22 11:40:18 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _raw;
        static const int _fract8bits;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& rhs);
        ~Fixed();

        Fixed(int n);
        Fixed(float f);

        int getRawBits ( void ) const;
        void setRawBits ( int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;

};

std::ostream& operator<<(std::ostream&os, const Fixed& fx);

#endif
