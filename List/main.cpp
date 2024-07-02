#include <iostream>
#include "List.h"

int main()
{
    MyList list(7,5);
    std::cout << "Elements: ";
    list.Print();
    std::cout << "\n";
    std::cout<<list.DeleteFirst();
    std::cout << std::endl<<"IsEmpty: " << list.isEmpty();
    std::cout << "\n";
    return 0;
}
