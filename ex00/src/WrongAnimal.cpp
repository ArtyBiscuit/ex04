#include <WrongAnimal.hpp>

// CANONICAL FORM
//  DEFAULT CONSTRUCT
WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor" << std::endl;
}

//  CONSTRUCTOR WITH TYPE
WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "WrongAnimal: Constructor with type " << type << std::endl;
}

//  DESTRUCTOR
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "WrongAnimal: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal: Copy contsructor" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "**MISTERYCAL WRONGSOUND**" << std::endl;
}
