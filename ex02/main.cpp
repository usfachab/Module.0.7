#include "Array.hpp"
#include "Array.cpp"

int main()
{
    Array<int> arr( 10 );
    
    Array<int> arr1;

    srand( time( 0 ) );
    try
    {
        for (size_t i = 0; i < 10; i++)
            arr[ i ] = rand() % 10;

        arr1 = arr;
    
        for (size_t i = 0; i < 10; i++)
            std::cout << arr1[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    Array<std::string> strs( 1 );

    try
    {
        for (int i = 0; i < 1; i++)
            strs[ i ] = "Hello";

        for (int i = 0; i < 1; i++)
            std::cout << strs[ i ] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
