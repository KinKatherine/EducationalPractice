#include "Employee.h"
#include <iostream>

Employee::Employee(int age)
{
	_age = age;
}

void Employee::Print()
{  
	std::cout << _age<<" ";
}