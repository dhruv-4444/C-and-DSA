#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    } pokemon;
    void change(pokemon* p)
    {
        (*p).hp=70;
        (*p).attack=60;
        (*p).speed=100;
        (*p).tier='a';
        strcpy((*p).name,"raiikachu");
    }
    int main()
    {
        pokemon pikachu;
        pikachu.hp=60;
        pikachu.attack=60;
        pikachu.speed=100;
        pikachu.tier='a';
        strcpy(pikachu.name,"pikachu");

        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

        change(&pikachu);
     
        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);
        pokemon* x=&pikachu;
        (*x).hp=110;
        printf("%d\n",pikachu.hp);
    }