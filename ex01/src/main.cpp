#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/WrongCat.hpp"

void	test_subject(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}

void	test_wrong_animal(void)
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();

	std::cout << "Type: " << i->getType() << std::endl;
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
}

void	test_copy_assignement(void)
{
	std::cout << "---Test Copy----" << std::endl;
	Cat *i;
	Cat *j = new Cat();

	i = j;
	delete i;
	std::cout << "---Test Copy end----" << std::endl;
}

int	main(void)
{
	test_subject();
	test_wrong_animal();
	test_copy_assignement();
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	std::cout << std::endl;
	Cat basic;
	{
		Cat tmp = basic;
	}
	return (0);
}
