#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T> // inherit private
{
public:
    Stack();
    ~Stack();
    bool empty() const;
    size_t size() const;
    void push(const T& item);
    void pop();  // throws std::underflow_error if empty
    const T& top() const; // throws std::underflow_error if empty
    // Add other members only if necessary 
};

// Constructor
template <typename T>
Stack<T>::Stack()
{

}

// Deconstructor
template <typename T>
Stack<T>::~Stack()
{

}

// Empty() Function
template <typename T>
bool Stack<T>::empty() const
{
  return std::vector<T>::empty();
}

// size() function
template <typename T>
size_t Stack<T>::size() const
{
  return std::vector<T>::size();
}

// push() function
template <typename T>
void Stack<T>::push(const T& item)
{
  std::vector<T>::push_back(item);
}

// pop() function
template <typename T>
void Stack<T>::pop()
{
  // If empty
  if (empty()){
    throw std::underflow_error("");
  }
  // else 
  std::vector<T>::pop_back();
}

// top() function
template <typename T>
const T& Stack<T>::top() const
{
  // If empty throw exception
  if (empty()){
    throw std::underflow_error("");
  }
  // else
  return std::vector<T>::back();
}

#endif