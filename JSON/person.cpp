#include "person.h"

namespace ns {
std::string Person::GetName()
{
    return _name;
}

int Person::GetAge()
{
    return _age;
}

Person::Person(std::string name, int age)
{
    _name = name;
    _age = age;
}
}
