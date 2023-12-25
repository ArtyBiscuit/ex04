# include "../inc/Cat.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat: Default constructor" << std::endl;
	this->_brain = new Brain();
}

//  DESTRUCTOR
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat: Copy assignement overload" << std::endl;
	this->setType(src.getType());
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

//  COPY CONSTRUCTOR
Cat::Cat(const Cat &src): Animal("Cat")
{
	std::cout << "Cat: Copy contsructor" << std::endl;
	this->_brain = new Brain(*src._brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: **MEOW**" << std::endl;
}
