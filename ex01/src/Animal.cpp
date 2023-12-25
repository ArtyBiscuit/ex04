#include "../inc/Animal.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Animal::Animal(void): _type("Animal")
{
	std::cout << "Animal: Default constructor" << std::endl;
}

//  CONSTRUCTOR WITH TYPE
Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal: Constructor with type " << type << std::endl;
}

//  DESTRUCTOR
Animal::~Animal(void)
{
	std::cout << "Animal: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal: Copy assignement overload" << std::endl;
	if (this != &src)
		this->setType(src.getType());
	return (*this);
}

//  COPY CONSTRUCTOR
Animal::Animal(const Animal &src)
{
	std::cout << "Animal: Copy contsructor" << std::endl;
	*this = src;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "**MISTERYCAL SOUND**" << std::endl;
}
