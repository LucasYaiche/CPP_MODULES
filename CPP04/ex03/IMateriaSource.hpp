#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>

class AMateria;

class IMateriaSource 
{

	public:

		virtual ~IMateriaSource(){}

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

		IMateriaSource &		operator=( IMateriaSource const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, IMateriaSource const & i );

#endif /* ************************************************** IMATERIASOURCE_H */