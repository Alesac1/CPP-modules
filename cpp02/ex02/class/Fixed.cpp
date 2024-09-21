#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;

}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) {
		this ->_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator <<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

bool	Fixed::operator>(const Fixed& other) const {
	return this->getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(const Fixed& other) const {
	return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed& other) const {
	return this->getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(const Fixed& other) const {
	return this->getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(const Fixed& other) const {
	return this->getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed& other) const {
	return this->getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& other) {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) {
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::min( Fixed &a, Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed&	Fixed::max( Fixed &a, Fixed &b ) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed&	Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed temp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

Fixed&	Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed temp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}