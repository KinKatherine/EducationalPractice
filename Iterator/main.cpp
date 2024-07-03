#include <iostream>
#include "List.h"
#include "ListIterator.h"
#include "Employee.h"
#include "ReverseListIterator.h"

#include "ReverseListIterator.cpp"
#include "List.cpp"
#include "ListIterator.cpp"

void PrintEmployees(Iterator<Employee*>& i);

int main()
{
    List<Employee*>* employees;
    employees = new List<Employee*>(10);    
    employees->Append(new Employee(45));
    employees->Append(new Employee(15));
    employees->Append(new Employee(10));
    employees->Append(new Employee(3));
    employees->Append(new Employee(56));
    
    ListIterator<Employee*> forward(employees);
    std::cout << "Direct: ";
    PrintEmployees(forward);
    std::cout << "\n";
    std::cout << "Count: " << employees->Count() << "\n";
    std::cout << "Reverse: ";
    ReverseListIterator<Employee*> backward(employees);
    PrintEmployees(backward);
    return 0;
} 

void PrintEmployees(Iterator<Employee*>& i)
{
    for (i.First(); !i.IsDone(); i.Next()) 
    {
        i.CurrentItem()->Print();
    }
}