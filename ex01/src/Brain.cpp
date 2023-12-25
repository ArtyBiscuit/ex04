#include "../inc/Brain.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Brain::Brain(void)
{
	std::cout << "Brain: Default constructor" << std::endl;
	for (int i = 0; i < NB_IDEA; i++)
		this->_ideas[i].clear();
}

//  DESTRUCTOR
Brain::~Brain(void)
{
	std::cout << "Brain: Destructor" << std::endl;
}

//  COPY ASSIGNENENT OVERLOAD
Brain	&Brain::operator=(const Brain &src)
{
	// DEEP COPY MEAN, COPY VALUE ONE BY ONE
	std::cout << "Brain: Copy assignement overload" << std::endl;
	for (int i = 0; i < NB_IDEA; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

//  COPY CONSTRUCTOR
Brain::Brain(const Brain &src)
{
	std::cout << "Brain: Copy contsructor" << std::endl;
	*this = src;
}
