# include "Cat.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Cat::Cat(void): AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat: Default constructor" << std::endl;
}

//  DESTRUCTOR
Cat::~Cat(void)
{
	std::cout << "Cat: Destructor" << std::endl;
	delete this->_brain;
}

//  COPY ASSIGNENENT OVERLOAD
Cat	&Cat::operator=(const Cat &src)
{
	this->setType(src.getType());
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
Cat::Cat(const Cat &src): AAnimal("Cat")
{
	*this = src;
	std::cout << "Cat: Copy contsructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: **MEOW**" << std::endl;
}
