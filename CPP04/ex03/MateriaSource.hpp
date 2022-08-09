#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();


		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

		MateriaSource &		operator=( MateriaSource const & rhs );

	protected:

		AMateria * 		spell[4];


	private:

};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif /* *************************************************** MATERIASOURCE_H */