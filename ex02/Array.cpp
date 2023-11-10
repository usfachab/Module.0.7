#include "Array.hpp"

template <typename T>
Array<T>::Array() : aSize ( 0 )
{
    array = new T[0];
}

template <typename T>
Array<T>::Array( unsigned int n ) : aSize ( n )
{
    array = new T[ n ];
}

template <typename T>
Array<T>::Array( const Array& obj )
{
    *this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array& rhs )
{
    array = new T[ rhs.aSize ];

    aSize = rhs.aSize;

    for ( unsigned int i = 0; i < rhs.aSize; i++ )
        array[ i ] = rhs.array[ i ];

    return ( *this );
}

template <typename T>
Array<T>::~Array()
{
    delete [] array;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return ( aSize );
}

template <typename T>
T& Array<T>::operator[]( unsigned int idx )
{
    if ( aSize == 0 )
        throw std::out_of_range( "Empty array" );
    if ( idx >= aSize )
        throw std::out_of_range( "Index out of range" );
    return ( array[ idx ] );
}