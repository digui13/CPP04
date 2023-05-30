#include "../incs/Brain.hpp"

Brain::Brain(void)
{
	cout 	<< "Constructor Brain"
			<< endl;
}

Brain::Brain(const Brain &obj)
{
	cout 	<< "Copy Brain"
			<< endl;

	*this = obj;
}


Brain::~Brain(void)
{
	cout 	<< "Deconstructor Brain"
			<< endl;
}

Brain& Brain::operator=(const Brain &obj)
{
	cout 	<< "Assign Brain"
			<< endl;
	int	idx;
	
	idx = 0;
	while (idx < 100) 
	{
		this->_ideas[idx] = obj._ideas[idx];
		idx++;
	}

	return (*this);
}

