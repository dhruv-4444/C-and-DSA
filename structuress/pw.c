#include<stdio.h>
int main(){
    struct pokemon{ //user define datatype
    //attributes
        int hp;
        int speed;
        int attack;
        char tier;
    }/*we van declare v ariabel here also like pikachu,charizaerd,mewtwo*/;

    struct pokemon pikachu;
printf("enter attack of pikachu\n");
scanf("%d",&pikachu.attack);

    // pikachu.attack = 60;
    pikachu.hp =50;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d\n",pikachu.attack);


    struct pokemon charizaerd;
    charizaerd.attack=130;
    charizaerd.hp=80;
    charizaerd.attack=80;
    charizaerd.tier='s';
   printf("%d\n",charizaerd.attack);


    struct pokemon mewtwo;
    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.attack=200;
    mewtwo.tier='G';
     printf("%d\n",mewtwo.attack);


    
    return 0;
}