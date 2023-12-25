#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/AAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main(void)
{
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return (0);
}
