#include <stdio.h>
int main(){
    void delay(float a){
        int add, time, i;
        time = a * 100000000;
        for(i=0; i<time;i++){
            add*=i;
            add++;
            add++;
        };
    };
    int x;
    int y;
    int z;
    printf("Enter number: \n");
    scanf("%d", &z);
    printf("\nz = %d\n", z);
    ////////////////////////////////////////////////////////
    beg:
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
    for (x = z ; x >= 1; x--)
    {
        for(y = x ; y >= 1; y--)
        {
        printf("* ");
        }
        delay(0.05);
        printf("\n");
    };
    goto beg;
    ////////////////////////////////////////////////////////
    return 0;
}
