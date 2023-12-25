# include "../inc/Dog.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog: Default constructor" << std::endl;
}

//  DESTRUCTOR
Dog::~Dog(void)
{
	std::cout << "Dog: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->setType(src.getType());
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
	std::cout << "**WOOF**" << std::endl;
}
