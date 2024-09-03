#include <stdio.h> 

int main(void)
{

    char character;
    int inum;
    float fnum;

    scanf_s("%c", &character);
    scanf_s("%d",&inum);
    scanf_s("%f",&fnum);

    printf("%c, %d, %f, \n", character, inum, fnum);

    return 0;
}





