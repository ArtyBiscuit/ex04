#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		// CANONICAL FORM
		AAnimal(void);
		AAnimal(const AAnimal &src);
		// Should be virtual or an error message occur when destroyed
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &src);

		AAnimal(std::string type);

		std::string		getType(void) const;
		void			setType(std::string type);

		virtual void	makeSound(void) const = 0;
};

#endif // ANIMAL_HPP
