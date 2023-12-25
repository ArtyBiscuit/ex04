# include "WrongCat.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor" << std::endl;
}

//  DESTRUCTOR
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->setType(src.getType());
	std::cout << "WrongCat: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
WrongCat::WrongCat(const WrongCat &src): WrongAnimal("WrongCat")
{
	*this = src;
	std::cout << "WrongCat: Copy contsructor" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: **WRONGMEOW**" << std::endl;
}
