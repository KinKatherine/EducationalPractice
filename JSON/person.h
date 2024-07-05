#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace ns
{
class Person
{
public:
    Person() = default;
    ~Person() = default;
    Person(std::string name, int age);
    std::string GetName();
    int GetAge();
    std::string _name;
    int _age;

private:

};
}

#endif // PERSON_H
