#include "Stack.h"

/*****************************************************************************
    Constructors/ Destructor
*****************************************************************************/
// Time Complexity: O(1)
template <class T>
Stack<T>::Stack() {}

// Fill Constructor 
// Time Complexity: O(N), where N is the number specified by capacity
template <class T>
Stack<T>::Stack(const int& capacity, const T& data) {
    if (capacity <= 0) {
        std::list<T> temp(1, data);
        stack_.swap(temp);
        return;
    }

    std::list<T> temp_stack(capacity, data);
    stack_.swap(temp_stack);
}

// Copy Constructor
// Time Complexity: O(N), where N is the number of elements in the other stack
template <class T>
Stack<T>::Stack(const Stack<T>& other) {
    std::list<T> temp_stack(other.stack_);
    stack_.swap(temp_stack);
}

// Time Complexity: O(N), where N is the number of elements in the stack
template <class T>
Stack<T>::~Stack() {
    stack_.clear();
}

/*****************************************************************************
    Operator Overloading 
*****************************************************************************/
// Time Complexity: O(N), where N is the number of elements in the other stack
template <class T>
T& Stack<T>::operator=(const Stack<T>& other) {
    std::list<T> temp_stack(other.stack_);
    stack_.swap(temp_stack);
}

/*****************************************************************************
    Data Modification
*****************************************************************************/
// Time Complexity: O(1)
template <class T>
void Stack<T>::push(const T& data) {
    stack_.push_back(data);
}

// Time Complexity: O(1)
template <class T>
void Stack<T>::pop() {
    if (!empty()) {
        stack_.pop_back();
    }
}

/*****************************************************************************
    Data Observation
*****************************************************************************/
// Time Complexity: O(1)        !!WARNING: Undefined Behavior is queue is empty
template <class T>
T Stack<T>::top() const {
    return stack_.back();
}

// Time Complexity: O(1)
template <class T>
bool Stack<T>::empty() const {
    return stack_.empty();
}

// Time Complexity: O(1)
template <class T>
int Stack<T>::size() const {
    return stack_.size();
}
