#ifndef ITER_HPP
#define ITER_HPP
#define MAX_VAL 10
#define MAX_VAL1 10
#define MAX_VAL2 5

#include <iostream>
#include <stdexcept>

template <typename T>
void print( T& value )
{
    std::cout << value << std::endl;
}

template <typename T>
void iter( T *arr, int index, void (*func)( T& ) )
{
    if ( !arr )
        throw std::invalid_argument( "Invalid argument" );
    if ( index < 0 )
        throw std::out_of_range( "Index out of range" );
    for ( int i = 0; i < index; i++ )
        func( arr[ i ] );
}

#endif