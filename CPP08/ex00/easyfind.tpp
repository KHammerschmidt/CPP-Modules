
const char* NotFound::what() const throw()
{
	return ("Not found");
}

template<typename T>
T	easyfind(std::vector<T>& var, int val)
{
	typename std::vector<T>::iterator it = std::find(var.begin(), var.end(), val);
	if (it == var.end())
		throw NotFound();
	return *it;
}
