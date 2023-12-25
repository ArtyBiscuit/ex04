#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		// CANONICAL FORM
		Dog(void);
		Dog(const Dog &src);
		~Dog();
		Dog &operator=(const Dog &src);

		void	makeSound(void) const;
};

#endif // DOG_HPP
