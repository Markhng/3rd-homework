#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(void)
{
    int r;
    srand(time(0));
    r = rand() % 52;
    return r;
}

void printb(void)
{

}
int main()
{
    srand(time(0));
    struct
    {
        unsigned char col;
        unsigned int num;
    } b[52];
    for(int i1 = 0 ; i1 < 4 ; i1 ++)
    {
        for(int i2 = 0 ; i2 < 13 ; i2 ++)
        {
            switch (i1)
            {
            case 0 :
                b[i1*13 + i2].col = 'S';
                break;
            case 1 :
                b[i1*13 + i2].col = 'H';
                break;
            case 2 :
                b[i1*13 + i2].col = 'D';
                break;
            case 3 :
                b[i1*13 + i2].col = 'C';
                break;
            }
            b[i1*13 + i2].num = i2;
        }
    }
    printf("P1\tP2\tP3\tP4\n\n");
    for(int i3 = 0 ; i3 < 13 ; i3 ++)
    {
        for (int i,i4 = 0 ; i4 < 4 ; i4 ++)
        {
            do
            {
                i = rand() % 52;
            }
            while(b[i].col == '\0');
            printf("%c %d\t",b[i].col,b[i].num + 1);
            b[i].col = '\0';
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
