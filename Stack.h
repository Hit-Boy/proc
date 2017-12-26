#include <iostream>
#include <fstream>
#include <climits>


class Stack
{
    private:
        unsigned current_size;
        double *stack_ptr;
        int max_size;

    public:
        Stack() :
            current_size (0) {}
        Stack(int);
        ~Stack();

        void push(double);
        double pop();
        int get_max_size() const {return max_size;}
        int get_size();
        void dump();
        void swap(Stack *other);
};


Stack::Stack(int sz)
{
    max_size = sz;
    stack_ptr = new double [max_size];
    current_size = 0;
}


Stack::~Stack()
{
    delete [] stack_ptr;
}


void Stack::push(double new_element)
{
    if(current_size < max_size)
      stack_ptr[current_size++] = new_element;
}


double Stack::pop()
{
    if(current_size > 0)
       return stack_ptr[--current_size];
    else
       return 0.0f;
}


int Stack::get_size()
{
    return current_size;
}


void Stack::dump()
{
    if (current_size)
        for (int i = 0; i < current_size; i++)
            std::cout << stack_ptr[i] << " ";
    else
        std::cout << "empty";
    std::cout << "\n";
}


void Stack::swap(Stack *other)
{
    std::swap(max_size, other->max_size);
    std::swap(stack_ptr, other->stack_ptr);
    std::swap(current_size, other->current_size);
}



