#include "Fixed.hpp"

Fixed::Fixed() : m_fixPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : m_fixPoint(fixed.m_fixPoint) {
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed& fixed) {
	std::cout << "Assignation operator called\n";
	m_fixPoint = fixed.getRawBits();
	return *this; // возвращаем адрес констаннтного указателя на текущий объект, которому только что выполнили присваивание
}


int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return m_fixPoint;
}

void Fixed::setRawBits(int mFixPoint) {
	std::cout << "setRawBits member function called" << std::endl;
	m_fixPoint = mFixPoint;
}
