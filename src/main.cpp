#include <Arduino.h>


#define boton_A 39                              // Pin VN Esp32 para botón A
#define boton_B 34                              // Pin GPIO34 Esp32 para botón A
#define boton_C 35                              // Pin GPIO35 Esp32 para botón A ()

//Banderas para pulsadores
    byte _btnA      = 0;
    byte _btnB      = 0;
    byte _btnC      = 0;

void setup() {
  
  //Configure como entrada
  pinMode (boton_A,INPUT);
  pinMode (boton_B,INPUT);
  pinMode (boton_C,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void new_boton()
{   
    //Leer Boton A
    if(digitalRead(boton_A)==0 && _btnA==0 && _btnB==0 && _btnC==0) 
    { 
        _btnA=1; 
        Serial.println("Boton A");
    }
    
    //Leer Boton B
    if(digitalRead(boton_B)==0 && _btnA==0 && _btnB==0 && _btnC==0) 
    { 
        _btnB=1; 
        Serial.println("Boton B");
    }

    //Leer Boton C
    if(digitalRead(boton_C)==0 && _btnA==0 && _btnB==0 && _btnC==0) 
    { 
        _btnC=1; 
        Serial.println("Boton C");
    }
}