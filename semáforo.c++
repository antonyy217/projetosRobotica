#include <Arduino.h>

int vermelho = 13 ;
int amarelo = 12 ;
int verde = 11 ;
int verMped = 10;
int verped = 9;



void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(verMped, OUTPUT);
  pinMode(verped, OUTPUT);
 
}


void loop()
{
  
  // VERMELHO ACESO
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(verMped, LOW);
  digitalWrite(verped, HIGH);
  
  delay(4000) ;
    
  // VERDE ACESO
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(verMped, HIGH);
  digitalWrite(verped, LOW);
 
  delay(4000) ;
    
   // AMARELO ACESO
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(verMped, HIGH);
  digitalWrite(verped, LOW);
  
  delay(1000) ;
} 