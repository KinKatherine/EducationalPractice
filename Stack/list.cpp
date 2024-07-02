#include "list.h"

void MyList::AddFirst(int a)
{
    size++;
    SElement* newElement = new SElement(a, this->first);
    first = newElement;

}

std::vector<int> MyList::Print()
{
    std::vector<int> valueVector;
    for (SElement* temp = first; temp != nullptr; temp = temp->next)
    {
        valueVector.push_back(temp->data);
    }
    return valueVector;
}

int MyList::DeleteFirst()
{
    if (first != nullptr)
    {
        SElement* Temp = first;
        first = first->next;
        int a = Temp->data;
        delete Temp;
        size--;
        return a;
    }

    return 0;
}

MyList::MyList()
{
    first = nullptr;
}

MyList::MyList(int a)
{
    first = new SElement(a, nullptr);
    size=1;
}

MyList::MyList(int a, int b)
{
    first = new SElement(a, nullptr);
    SElement* temp = new SElement(b, nullptr);
    first->next = temp;
    size=2;
}

MyList::MyList(int a, int b, int c)
{
    first = new SElement(a, nullptr);
    SElement* temp = new SElement(b, nullptr);
    first->next = temp;
    temp = new SElement(c, nullptr);
    first->next->next = temp;
    size = 3;
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

int MyList::Size()
{
    return  size;
}

