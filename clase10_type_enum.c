#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int maine()
{
    /* llamamos el enum weekDays y le solicitamos el número Wednesday del día */
    enum weekDays today;
    today = Wednesday;
        /*printf("Day %d", today);*/
        printf("Day %d", today+1);
        return 0;
}
/* otro ejemplo */

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
} card;

int main()
{
    card = spades;
    /*tomamos el tamaño de la carta*/
    printf("Size of %d", sizeof(card));
    printf("\n");
    /*tomamos el número de la carta*/
    printf("Card %d", card);
    return 0;
}