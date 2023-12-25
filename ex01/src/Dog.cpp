# include "../inc/Dog.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog: Default constructor" << std::endl;
	this->_brain = new Brain();
}

//  DESTRUCTOR
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog: Copy assignement overload" << std::endl;
	this->setType(src.getType());
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

//  COPY CONSTRUCTOR
Dog::Dog(const Dog &src): Animal("Dog")
{
	std::cout << "Dog: Copy contsructor" << std::endl;
	this->_brain = new Brain(*src._brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: **MEOW**" << std::endl;
}
