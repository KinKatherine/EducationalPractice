#include "stack.h"

MyStack::MyStack()
{
 list = new MyList();
}

void MyStack::Push(int a)
{
    list->AddFirst(a);
}

int MyStack::Pop()
{
    return list->DeleteFirst();
}

int MyStack::Size()
{
    return list->Size();
}

bool MyStack::IsEmpty()
{
    return list->isEmpty();
}

std::vector<int> MyStack::Print()
{
    return list->Print();
}
