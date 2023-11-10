#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int aSize;
public:
    Array();
    Array( unsigned int );
    Array( const Array & );
    Array& operator=( const Array & );
    T& operator[]( unsigned int idx );
    ~Array();

    unsigned int size() const;
};

#endif