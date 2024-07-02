#ifndef STACK_H
#define STACK_H
#include <list.h>
#include<vector>
class MyList;

class MyStack
{
public:
    MyStack();
    void Push(int);
    int Pop();
    bool IsEmpty();
    int Size();
    std::vector<int> Print();
private:
    MyList *list;
};

#endif // STACK_H
