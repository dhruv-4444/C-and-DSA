#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    
    pokemon arr[3];
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='a';
    strcpy(arr[0].name,"charizard");

    arr[1].attack=150;
    arr[1].hp=100;
    arr[1].speed=130;
    arr[1].tier='s';
    strcpy(arr[1].name,"mewtwo");

    arr[2].attack=50;
    arr[2].hp=300;
    arr[2].speed=80;
    arr[2].tier='b';
    strcpy(arr[2].name,"pikachu");

for (int i=0;i<3;i++)
{
    printf("%s\n",arr[i].name);
    printf("attack = %d\n",arr[i].attack);
    printf("hp = %d\n",arr[i].hp);
    printf("speed = %d\n",arr[i].speed);
    printf("tier = %c\n",arr[i].tier);
    printf("\n");
}








    return 0;
}