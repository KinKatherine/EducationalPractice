#include "List.h"

void MyList::AddFirst(int a)
{
    SElement* newElement = new SElement(a, this->first);
    first = newElement;
}
void MyList::Print()
{
    for (SElement* temp = first; temp != nullptr; temp = temp->next)
    {
        std::cout << temp->data << " ";
    }
}
int MyList::DeleteFirst()
{
    if (first != nullptr)
    {
        SElement* Temp = first;
        first = first->next;
        int a = Temp->data;
        delete Temp;
        return a;
    }
}
MyList::MyList()
{
    first = nullptr;
}
MyList::MyList(int a)
{
    first = new SElement(a, nullptr);
}
MyList::MyList(int a, int b)
{
    first = new SElement(a, nullptr);
    SElement* temp = new SElement(b, nullptr);
    first->next = temp;
}
MyList::MyList(int a, int b, int c)
{
    first = new SElement(a, nullptr);
    SElement* temp = new SElement(b, nullptr);
    first->next = temp;
    temp = new SElement(c, nullptr);
    first->next->next = temp;
}
MyList::~MyList()
{
    while (first != nullptr)
    {
        this->DeleteFirst();
    }
}
bool MyList::isEmpty()
{
    return (nullptr == first);
}






