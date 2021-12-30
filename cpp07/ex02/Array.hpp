#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int	arr_size;
	T* arr;
public:
	Array();
	Array(unsigned int n);
	Array<T>&	operator=(const Array<T> &array);
	T&	operator[](const unsigned int index);
	const T&	operator[](const unsigned int index) const;
	Array(const Array<T>& array);
	unsigned int	size() const;
	~Array();
};

template<typename T>
Array<T>::Array() : arr_size(0), arr(new T[0])
{
}

template<typename T>
Array<T>::Array(unsigned int n) : arr_size(n), arr(new T[n])
{
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T> &array)
{
	delete[] arr;
	this->arr_size = array.size();
	this->arr = new T[this->arr_size];
	for (unsigned int i = 0; i < this->arr_size; i++)
		(this->arr)[i] = array.arr[i];
	return *this;
}

template<typename T>
Array<T>::Array(const Array<T>& array): arr_size(array.size()), arr(new T[arr_size])
{
	*this = array;
}

template<typename T>
T&	Array<T>::operator[](const unsigned int index)
{
	if (this->arr_size <= index)
		throw std::exception();
	else
		return this->arr[index];
}

template<typename T>
const T&	Array<T>::operator[](const unsigned int index) const
{
	if (this->arr_size <= index)
		throw std::exception();
	else
		return this->arr[index];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return this->arr_size;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}

#endif