#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <stack>
# include <list>


template< typename T >

class MutantStack : public std::stack<T>
{


	public:
		typedef typename	MutantStack::stack::container_type::iterator				iterator;
		typedef typename	MutantStack::stack::container_type::reverse_iterator		reverse_iterator;
		typedef typename	MutantStack::stack::container_type::const_iterator			const_iterator;
		typedef typename	MutantStack::stack::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack( MutantStack const & src ) : std::stack<T>(src) {};
		virtual	~MutantStack(){};
	
		iterator			begin(){return	this->c.begin();}
		iterator			end(){return	this->c.end();}
		reverse_iterator	rbegin(){return	this->c.rbegin();}
		reverse_iterator	rend(){return	this->c.rend();}
		const_iterator			begin()const{return	this->c.begin();}
		const_iterator			end()const{return	this->c.end();}
		const_reverse_iterator	rbegin()const{return	this->c.rbegin();}
		const_reverse_iterator	rend()const{return	this->c.rend();}

		MutantStack &		operator=( MutantStack const & rhs ) {return std::stack<T>(rhs);};

};

#endif /* ***************************************************** MUTANTSTACK_H */