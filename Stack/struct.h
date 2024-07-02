#ifndef STRUCT_H
#define STRUCT_H

struct SElement
{
    int data;
    SElement* next;
    SElement(int, SElement*);
    ~SElement() = default;
};
#endif // STRUCT_H
