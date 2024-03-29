#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{

    int hp;
    int attck;
    int speed;
    char name[50];
    }pokemon;
    typedef struct legendrypokemon{
        pokemon normal;
        char ability[10];

    }legendrypokemon;

    legendrypokemon mewtwo;
    mewtwo.normal.attck=100;
    mewtwo.normal.hp=50;
    mewtwo.normal.speed=150;
    strcpy(mewtwo.normal.name,"mewtwo");
    strcpy(mewtwo.ability,"pressure");



}