#include <iostream>
#include"Struct.h"

class MyList
{
private:
    SElement* first;
public:
    MyList();
    MyList(int a);
    MyList(int a,int b);
    MyList(int a, int b, int c);
    ~MyList();
    bool isEmpty();
    void AddFirst(int a);
    int DeleteFirst();
    void Print();
};