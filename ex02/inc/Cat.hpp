#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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
