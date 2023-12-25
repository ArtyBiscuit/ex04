#include "AAnimal.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
AAnimal::AAnimal(void): _type("AAnimal")
{
	std::cout << "AAnimal: Default constructor" << std::endl;
}

//  CONSTRUCTOR WITH TYPE
AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "AAnimal: Constructor with type " << type << std::endl;
}

//  DESTRUCTOR
AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "AAnimal: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
	std::cout << "AAnimal: Copy contsructor" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}
