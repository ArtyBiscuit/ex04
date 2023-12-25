# include "../inc/Cat.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat: Default constructor" << std::endl;
}

//  DESTRUCTOR
Cat::~Cat(void)
{
	std::cout << "Cat: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "Cat: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
Cat::Cat(const Cat &src): Animal("Cat")
{
	*this = src;
	std::cout << "Cat: Copy contsructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "**MEOW**" << std::endl;
}
