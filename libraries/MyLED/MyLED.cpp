#include "MyLED.h"

void MyLED::selectPin( int Pin ){
    const unsigned long BaudRate = 9600;
    Serial.begin( BaudRate );
    Serial.print("Configuring Pin ");
    Serial.print( Pin );
    Serial.print(" for OUTPUT.\n");
    pinMode( Pin, OUTPUT );
    _Pin = Pin;
}

void MyLED::blinkLED( const unsigned long On, const unsigned long Off ){
    digitalWrite( _Pin, HIGH );
    delay( On );
    digitalWrite( _Pin, LOW );
    delay( Off );
}
