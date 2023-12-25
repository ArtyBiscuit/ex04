#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		// CANONICAL FORM
		Animal(void);
		Animal(const Animal &src);
		// Should be virtual or an error message occur when destroyed
		virtual ~Animal();
		Animal &operator=(const Animal &src);

		Animal(std::string type);

		std::string		getType(void) const;
		void			setType(std::string type);

		virtual void	makeSound(void) const;
};

#endif // ANIMAL_HPP
