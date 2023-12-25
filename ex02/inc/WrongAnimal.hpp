#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		// CANONICAL FORM
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &src);

		WrongAnimal(std::string type);

		std::string		getType(void) const;
		void			setType(std::string type);

		void	makeSound(void) const;
};

#endif // WRONGANIMAL_HPP
