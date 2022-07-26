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
		Fixed( Fixed const & src );
		~Fixed();

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		float		toFloat(void) const;
		int			toInt(void) const;

		Fixed &		operator=( Fixed const & rhs );

	private:

		int					_raw;
		static	const int	_bit = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */