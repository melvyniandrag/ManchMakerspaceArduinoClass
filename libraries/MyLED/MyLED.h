#ifndef MyLED_H
#define MyLED_H

#include "Arduino.h"

class MyLED {
    public:
        void selectPin( int Pin );
        void blinkLED( const unsigned long On, const unsigned long Off );
        
    private:
        int _Pin;
};

#endif

