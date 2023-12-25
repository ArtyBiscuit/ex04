#include "Brain.hpp"

// CANONICAL FORM
//  DEFAULT CONSTRUCT
Brain::Brain(void)
{
	for (int i = 0; i < NB_IDEA; i++)
		this->_idea[i].clear();
	std::cout << "Brain: Default constructor" << std::endl;
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
	for (int i = 0; i < NB_IDEA; i++)
		this->_idea[i] = src._idea[i];
	std::cout << "Brain: Copy assignement overload" << std::endl;
	return (*this);
}

//  COPY CONSTRUCTOR
Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain: Copy contsructor" << std::endl;
}
