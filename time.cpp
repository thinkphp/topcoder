#include <iostream>
#include <string>
    
using namespace std;

class Time {
    
    public:  
    Time(){};
    
    string whatTime( int s ) {
        
        return to_string( s / 3600 ) + ':' + to_string( s % 3600 / 60 ) + ':' + to_string( s % 60 );
    } 
};
