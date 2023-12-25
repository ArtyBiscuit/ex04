#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		// CANONICAL FORM
		Cat(void);
		Cat(const Cat &src);
		~Cat();
		Cat &operator=(const Cat &src);

		void	makeSound(void) const;
};

#endif // CAT_HPP
