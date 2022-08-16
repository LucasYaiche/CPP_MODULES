#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed(void);
		Fixed( Fixed const & src );
		~Fixed(void);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		Fixed &		operator=( Fixed const & rhs );

	private:

		int 				_raw;
		static	const int	_bit = 8;

};

#endif /* *********************************************************** FIXED_H */