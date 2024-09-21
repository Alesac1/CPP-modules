#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	int				_fixedPointValue;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);

	static	Fixed& min( Fixed &a, Fixed &b );
	static	Fixed& max( Fixed &a, Fixed &b );
	static	const Fixed& min( const Fixed &a, const Fixed &b );
	static	const Fixed& max( const Fixed &a, const Fixed &b );

    Fixed&	operator++(void);
    Fixed	operator++(int);
    Fixed&	operator--(void);
    Fixed	operator--(int);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif