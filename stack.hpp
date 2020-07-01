#ifndef __STACK_HPP__
#define __STACK_HPP__

#include <iostream>

class Stack
{

    public:

        Stack(int capacity);

        ~Stack();

        void push(int elem);

        void pop();

        int top() const;

        bool empty() const;

        int size() const;

    private:

        int *elements_;
        int top_;
        int capacity_;

};

#endif // __STACK_HPP__
