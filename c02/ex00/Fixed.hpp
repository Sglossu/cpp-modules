#pragma once
#include <iostream>

class Fixed {
private:
	int 				m_fixPoint;
	static const int 	m_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	int getRawBits() const;
	void setRawBits(int mFixPoint);
};
