#include <stdio.h>
#include <stdlib.h>

int x;
int y;
int z;
time_t t;
void delay(float a){
        int add, time, i;
        time = a * 100000000;
        for(i=0; i<time;i++){
            add*=i;
            add++;
            add++;
        };
    };
void up(){
    for (x = 0 ; x <= z; x++)
    {
        for(y = 0 ; y <= x; y++)
        {
        printf("* ");
        }
        delay(0.05);
        printf("\n");
    };
    delay(0.05);
}
void down(){
    for (x = z ; x >= 1; x--)
    {
        for(y = x ; y >= 1; y--)
        {
        printf("* ");
        }
        delay(0.05);
        printf("\n");
    };
}
int main(){
    srand((unsigned) time(&t));
    printf("Enter number: \n");
    scanf("%d", &z);
    printf("\nz = %d\n", z);
    beg:
    up();
    //down();
    //z = rand() % 10;
    z ++;
    goto beg;
    return 0;
}
