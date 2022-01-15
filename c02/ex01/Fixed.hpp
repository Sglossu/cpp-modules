#pragma once
#include <iostream>
#include <cmath>

class Fixed {
private:
	int 				m_fixPoint;
	static const int 	m_bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	int getRawBits() const;
	void setRawBits(int mFixPoint);

	float toFloat( void ) const;
	int toInt( void ) const;
};
