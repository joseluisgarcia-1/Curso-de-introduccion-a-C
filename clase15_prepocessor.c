/*const int PRICEHOTDOG = 100;
const float NUMCARS = 23.4;
const char NAME = 'Messi';*/

#include <stdio.h>
//define no necesita cerrar con ;
#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main(){
    float pricePizzas;
    float numberOfSlices = 3;
    pricePizzas = PIZZACOST * numberOfSlices;
    printf("Total bill: %c %f", pricePizzas, NEWLINE);
    //printf("%c", NEWLINE);

}
