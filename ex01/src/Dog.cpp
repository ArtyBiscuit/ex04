# include "../inc/Dog.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog: Default constructor" << std::endl;
}

//  DESTRUCTOR
Dog::~Dog(void)
{
	std::cout << "Dog: Destructor" << std::endl;
	delete this->_brain;
}

//  COPY ASSIGNENENT OVERLOAD
Dog	&Dog::operator=(const Dog &src)
{
	this->setType(src.getType());
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
Dog::Dog(const Dog &src): Animal("Dog")
{
	*this = src;
	std::cout << "Dog: Copy contsructor" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: **MEOW**" << std::endl;
}
