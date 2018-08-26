#ifndef MyLED_H
#define MyLED_H

#include "Arduino.h"

class MyLED {
    public:
        void selectPin( int Pin );
        void blinkLED( const unsigned long On, const unsigned long Off );

        template< class T>
        void add( T a, T b ){
            return a + b;
        }
        
    private:
        int _Pin;
};

#endif

