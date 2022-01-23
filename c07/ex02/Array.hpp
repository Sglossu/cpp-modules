#pragma once

template <class T>
class Array {
private:
	T				*array;
	unsigned int	_size;
public:
	Array() : array(), _size() {};

	Array(unsigned int n) : array(new T[n]()), _size(n) {};

	Array(const Array<T>& other) {
		array = new T[other._size];
		_size = other._size;
		for (unsigned int i = 0; i < other._size; ++i)
			array[i] = other.array[i];
	};

	const Array& operator=(const Array<T>& other) {
		if (this == &other)
			return (*this);
		delete[] array;
		_size = other._size;
		array = new T[_size];
		for (unsigned int i = 0; i < other._size; ++i)
			array[i] = other.array[i];
		return (*this);
	};

	~Array() { delete []array; };

	T& operator[](unsigned int i) {
		if (i > _size)
			throw std::out_of_range("index out of range");
		return array[i];
	}

	unsigned int size() const { return _size; };
};