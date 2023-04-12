/*****************************************************************************
*    Brian Chairez                                                           *
*    Goal: std::list implementation of std::stack                            *
*    Advantages:                                                             *
*       -Fast operations: O(1) push(), pop(), and top()                      *
*       -Built in list functions and size tracking are helpful               *
*    Limitations:                                                            *
*       -Can only remove from the top and one at a time from the stack       *
*       -No way to access anything in the middle or beginning of the stack   *
*       -Lists are known for their poor reference locality                   *
*****************************************************************************/

#ifndef STACK_H
#define STACK_H

#include <list>

// LIFO
template <class T>
class Stack{
    private:
        std::list<T> stack_;
    public:
        Stack();
        Stack(const int& capacity, const T& data);
        Stack(const Stack<T>& other);
        ~Stack();
        T& operator=(const Stack<T>& other);
        void push(const T& data);
        void pop();
        T& top();
        bool empty() const;
        int size() const;
};

#endif
