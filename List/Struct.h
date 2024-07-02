
struct SElement
{
    int data;
    SElement* next;
    SElement(int data, SElement* next)
    {
        this->data = data;
        this->next = next;
    };
    ~SElement() = default;
};


































