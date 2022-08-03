#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#define NUMBER 8

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;

	std::cout << "=============================" << std::endl;

	AAnimal* animals[NUMBER];
	for (int i = 0; i < NUMBER; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	Dog *dog_ptr((Dog *)animals[0]);
	Cat *cat_ptr((Cat *)animals[1]);

	std::cout << "=============================" << std::endl;

	dog_ptr->getBrain()->setIdea(2, "food"); 
	cat_ptr->getBrain()->setIdea(2, "mouse");
	dog_ptr->getBrain()->setIdea(45, "human");
	cat_ptr->getBrain()->setIdea(45, "sleep");


	std::cout << dog_ptr->getBrain()->getIdea(2) << std::endl; 
	std::cout << cat_ptr->getBrain()->getIdea(2) << std::endl; 
	std::cout << dog_ptr->getBrain()->getIdea(45) << std::endl;
	std::cout << cat_ptr->getBrain()->getIdea(45) << std::endl;
		
	std::cout << "=============================" << std::endl;
	for (int i = 0; i < NUMBER; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	// AAnimal test;
}
