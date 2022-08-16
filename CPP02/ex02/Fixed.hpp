#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed( const Fixed & src );
		~Fixed();

		Fixed &		operator=( const Fixed & rhs );

		Fixed		operator+( const Fixed & rhs );
		Fixed		operator-( const Fixed & rhs );
		Fixed		operator*( const Fixed & rhs );
		Fixed		operator/( const Fixed & rhs );
	
		bool		operator>( const Fixed & rhs ) const;
		bool		operator<( const Fixed & rhs ) const;
		bool		operator>=( const Fixed & rhs ) const;
		bool		operator<=( const Fixed & rhs ) const;
		bool		operator==( const Fixed & rhs ) const;
		bool		operator!=( const Fixed & rhs ) const;

		Fixed &		operator++(void);
		Fixed 		operator++(int);
		Fixed &		operator--(void);
		Fixed		operator--(int);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		float		toFloat(void) const;
		int			toInt(void) const;

		static Fixed &			min(Fixed & n1, Fixed & n2);
		static const Fixed &	min(const Fixed & n1, const Fixed & n2);
		static Fixed &			max(Fixed & n1, Fixed & n2);
		static const Fixed &	max(const Fixed & n1, const Fixed & n2);

	private:

		int					_raw;
		static	const int	_bit = 8;

};

std::ostream &			operator<<( std::ostream & o, const Fixed & rhs );

#endif /* *********************************************************** FIXED_H */