#ifndef LIST_H
#define LIST_H
#include<vector>
#include"Struct.h"
#include<mainwindow.h>

class MyList
{
private:
    SElement* first;
    int size=0;
public:
    MyList();
    MyList(int a);
    MyList(int a, int b);
    MyList(int a, int b, int c);
    ~MyList();

    bool isEmpty();
    void AddFirst(int a);
    int DeleteFirst();
    std::vector<int> Print();
    int Size();
};
#endif // LIST_H
