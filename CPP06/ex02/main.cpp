#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	int	i = rand() % 3;
	switch (i)
	{
		case 0:
			std::cout << "Creating A" << std::endl;
			return (new A());
			break;
		case 1:
			std::cout << "Creating B" << std::endl;
			return (new B());
			break;
		case 2:
			std::cout << "Creating C" << std::endl;
			return (new C());
			break;
	}
	return 0;
}

void identify(Base* ptr)
{
	if (dynamic_cast<A *>(ptr) != nullptr)
    	std::cout << "A" << std::endl;
  	else if (dynamic_cast<B *>(ptr) != nullptr)
    	std::cout << "B" << std::endl;
  	else if (dynamic_cast<C *>(ptr) != nullptr)
   		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		identify(&p);
	}
	catch (const std::exception & e)
	{
	}

}

int main(void)
{
	std::srand(std::time(0));

	std::cout << "RANDOM BASES :" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base *rand4 = generate();
	std::cout << std::endl << std::endl;

	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;
	Base &rand4_ref = *rand4;

	std::cout << "ADDRESSES :" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1);
	identify(rand2);
	identify(rand3);
	identify(rand4);
	std::cout << std::endl << std::endl;

	std::cout << "REFERENCES :" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	identify(rand4_ref);

	delete rand1;
	delete rand2;
	delete rand3;
	delete rand4;
	
	return (0);
}