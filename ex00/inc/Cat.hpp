#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Animal.hpp"

class Cat : public Animal
{
	public:
		// CANONICAL FORM
		Cat(void);
		Cat(const Cat &src);
		~Cat();
		Cat &operator=(const Cat &src);

		void	makeSound(void) const;
};

#endif // CAT_HPP
