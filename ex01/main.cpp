#include "iter.hpp"

int main()
{
    int plop[ MAX_VAL ] = { 0,1,2,3,4,5,6,7,8,9 };
    
    int* mirror = new int[ MAX_VAL1 ];

    std::string strs[ 5 ] = { "Salut", "Comment" , "Tu", "Vas", "?"};

    srand( time( NULL ) );

    for ( int i = 0; i < MAX_VAL1; i++ )
    {
        const int value = rand();
        mirror[ i ] = value;
    }
 
    try
    {
        std::cout << "Print static integer array : " << std::endl;
        iter<const int>( plop, MAX_VAL, print );
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "Print dynamic integer array : " << std::endl;
        iter<const int>( mirror, MAX_VAL1 , print );
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "Print string array : " << std::endl;
        iter<const std::string>( strs, MAX_VAL2, print );
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
