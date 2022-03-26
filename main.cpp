#include <iostream>
#include <string.h>
#include <vector>

void ExampleI( void )
{
    std::string *pStringArr = new std::string[ 100 ];

    pStringArr[ 0 ] = std::string( "1" );
    pStringArr[ 1 ] = std::string( "qwuqwuqwu" );

    std::string *pTemp = &pStringArr[ 1 ];

    // delete pStringArr; //delete[] pStringArr; // <-------- Try uncomment this
    delete[] pTemp; // delete pTemp;          // <-------- Try uncomment this

    std::cout<< "pStringArr[ 1 ] = " << pStringArr[ 1 ] << std::endl;
}

typedef std::string TYPEDEFString[ 4 ];

void ExampleII( void )
{
    std::string *pMyString = new TYPEDEFString;
    pMyString[ 0 ] = std::string( "1" );
    pMyString[ 1 ] = std::string( "qwuqwuqwu" );
    pMyString[ 2 ] = std::string( "wuqwuqwuq" );
    pMyString[ 3 ] = std::string( "uqwuqwuqw" );

    for( int i = 0; i < 4; i++ ) {
        std::cout << i << " : " << pMyString[ i ] << std::endl;
    }

    //delete pMyString;
    delete[] pMyString;

    std::vector<std::string> *pMyStringII = new std::vector<std::string>; // use vector rather than array
    pMyStringII->push_back( std::string( "1" ) );
    pMyStringII->push_back( std::string( "qwuqwuqwu" ) );
    pMyStringII->push_back( std::string( "wuqwuqwuq" ) );
    pMyStringII->push_back( std::string( "uqwuqwuqw" ) );

    for( int i = 0; i < 4; i++ ) {
        std::string TempString( pMyStringII->at( i ) );
        std::cout << i << " : " << TempString << std::endl;
    }
    delete pMyStringII;
}

int main( void ) {
    
    // ExampleI();
    
    ExampleII();

    return 0;
}

