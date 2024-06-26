#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int c_num = 8;
	int	num;
public:
	//constructor
	Fixed	();
	Fixed	(const Fixed& copy);
	Fixed	(const int num);
	Fixed	(const float num);
	
	//destructor
	~Fixed	();

	//operator overload
	Fixed&		operator=(const Fixed& copy);
	Fixed		operator+(const Fixed& copy) const;
	Fixed		operator-(const Fixed& copy) const;
	Fixed		operator*(const Fixed& copy) const;
	Fixed		operator/(const Fixed& copy) const;
	const Fixed	operator++(int);
	Fixed&		operator++(void);
	const Fixed	operator--(int);
	Fixed&		operator--(void);
	bool		operator>(const Fixed& copy) const;
	bool		operator<(const Fixed& copy) const;
	bool		operator>=(const Fixed& copy) const;
	bool		operator<=(const Fixed& copy) const;
	bool		operator==(const Fixed& copy) const;
	bool		operator!=(const Fixed& copy) const;
	
	//member function
	int					getRawBits () const;
	void				setRawBits (int const raw);
	float				toFloat () const;
	int					toInt () const;
	static Fixed&		min(Fixed& first, Fixed& second);
	static const Fixed&	min(const Fixed& first, const Fixed& second);
	static Fixed&		max(Fixed& first, Fixed& second);
	static const Fixed&	max(const Fixed& first, const Fixed& second);
};

std::ostream&	operator<<(std::ostream &os, const Fixed& copy);
