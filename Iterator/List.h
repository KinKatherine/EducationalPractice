#pragma once
#include <stdexcept>

template <class Item>
class List 
{
public:
	List(long size);
	~List();
	long Count() const;
	Item& Get(long index) const;
	void Append(const Item&);

private:
	Item* _items;
	int _capacity;
	int _defaultCapacity;
	int _size;
};
