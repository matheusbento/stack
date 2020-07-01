#include "stack.hpp"
#include <algorithm>

using namespace std;

Stack::Stack(int capacity)
{
    top_ = 0;
    capacity_ = capacity;
    elements_ = new int[capacity_];
}

Stack::~Stack()
{
    delete [] elements_;
}

void Stack::push(int elem)
{
    ++top_;

    if(top_ > capacity_)
    {
        int new_capacity = 2 * capacity_;

        int *tmp = new int[new_capacity];

        copy(elements_, elements_ + top_ - 1, tmp);

        delete [] elements_;

        elements_ = tmp;

        capacity_ = new_capacity;
    }

    elements_[top_ - 1] = elem;
}

void Stack::pop()
{
    --top_;
}


int Stack::top() const
{
    return elements_[top_ - 1];
}

bool Stack::empty() const
{
    return top_ == 0;
}


int Stack::size() const
{
    return top_;
}
