#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// CANONICAL FORM
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat();
		WrongCat &operator=(const WrongCat &src);

		void	makeSound(void) const;
};

#endif // WRONGCAT_HPP
