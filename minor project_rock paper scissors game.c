#include <stdio.h>

int main()
{
int A, B;
srand(time(NULL));
    while(1){
    printf("\n Enter choice ==> \n1 for Rock \n2 for Paper \n3 for Scissors \n4 for Quit \n");
    scanf("%d", &A);
    printf("You choose: %d \n",A);

    if (A== 4)
        break;

    B=1+rand()%3;
    printf("Computer Choose %d\n",B);

    if ((A == 1 && B == 1) || (A == 2 && B == 2) || (A == 3 && B == 3))
        printf("RESULT: DRAW!! \n");


    if ((A == 1 && B == 2) || (A == 2 && B == 3) || (A == 3 && B == 1))
        printf("RESULT: COMPUTER WON \n");


    if ((A == 3 && B == 2) || (A == 2 && B == 1) || (A == 1 && B == 3))
        printf("RESULT: YOU WIN \n");

}
return 0;
}
