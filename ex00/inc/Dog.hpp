#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// CANONICAL FORM
		Dog(void);
		Dog(const Dog &src);
		~Dog();
		Dog &operator=(const Dog &src);

		void	makeSound(void) const;
};

#endif // DOG_HPP
