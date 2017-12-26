#include "windows.h"
#include "math.h"
#include <fstream>

#include "Stack.cpp"

const int pr_push = 1;
const int pr_pop = 2;
const int pr_add = 3;
const int pr_mul = 4;
const int pr_sub = 5;
const int pr_div = 6;
const int pr_doub = 7;
const int pr_sqrt = 8;

class Pr
{
    private:
        Stack Stack;

        void Pr_add();
        void Pr_sub();
        void Pr_mul();
        void Pr_div();
        void Pr_doub();
        void Pr_sqrt();

    public:
        void Start();
}

int main()
{
    Pr Proc;

    FILE * pr_file;
    pr_file = fopen("4proc.txt");

    if(pr_file == 0)
    {
        std::cout << "File not found";
    }

    fclose(pr_file);
    return 0;
}

void Pr:pr_add()
{
    double a = Stack.pop();
    double b = Stack.pop();

    Stack.push(a + b);
}

void Pr:pr_sub()
{
    double a = Stack.pop();
    double b = Stack.pop();

    Stack.push(b - a);
}

void Pr:pr_mul()
{
    double a = Stack.pop();
    double b = Stack.pop();

    Stack.push(a * b);
}

void Pr:pr_div()
{
    double a = Stack.pop();
    double b = Stack.pop();

    Stack.push(b / a);
}

void Pr:pr_doub()
{
    double a = Stack.pop();

    Stack.push(a);
    Stack.push(a);
}

void Pr:pr_sqrt()
{
    double a = Stack.pop();

    Stack.push(sqrt(a));
}

void Pr:Start()
{
    while(!GetAsyncKeyState(VK_ESCAPE))
    {
        int tmp = 0;


        if(tmp == pr_push)
        {

        }
        else if (tmp == pr_pop)  Stack.M_pop();
        else if (tmp == pr_add)  Pr_add();
        else if (tmp == pr_sub)  Pr_sub();
        else if (tmp == pr_mul)  Pr_mul();
        else if (tmp == pr_div)  Pr_div();
        else if (tmp == pr_doub) Pr_doub();
        else if (tmp == pr_sqrt) Pr_sqrt();

    }

}


