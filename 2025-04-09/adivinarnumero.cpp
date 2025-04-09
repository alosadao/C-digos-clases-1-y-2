/*
juego de adivinar un numero

tener un numero
preguntar el numero
informar si lo adivina o nols
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number;
    for(;;) {
    std::cout <<"Adivina numero entre 1 y 100:\n";
    std::cin >> guessed_number;

    if (guessed_number == NUM){
        std::cout <<"GANASTE!!!\n";
        break;
    } else if (guessed_number > NUM){
        std::cout <<"Te pasaste.\n";
    }  else { 
        std::cout <<"Te falta.\n";
    }  
 }
    

    return 0;

}