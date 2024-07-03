#include "List.h"
#include "Employee.h"
#include <execution>

template <class Item>
List<Item>::List(long size)
{
	_size = 0;
	_defaultCapacity = size;
	_capacity = size;
	_items = new Item[_capacity];
}

template <class Item>
List<Item>::~List()
{
	delete[] _items;
}

template <class Item>
void List<Item>::Append(const Item& item)
{
	_items[_size++] = item;
}

template <class Item>
long List<Item>::Count() const
{
	return _size;
}

template <class Item>
Item& List<Item>::Get(long index) const
{
	if (index < 0 || index >= _size)
	{
		throw std::out_of_range("Index out of bounds.");
	}
	return _items[index];
}