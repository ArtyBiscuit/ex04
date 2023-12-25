#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define NB_IDEA		100

class Brain
{
	protected:
		std::string _idea[NB_IDEA];

	public:
		// CANONICAL FORM
		Brain(void);
		Brain(const Brain &src);
		// Should be virtual or an error message occur when destroyed
		~Brain();
		Brain &operator=(const Brain &src);
};

#endif // BRAIN_HPP
