#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TURNS 20

//#include<stdarg.h>

struct body                     //�����������
{
    int hp[TURNS];     //Ѫ��
    int atk[TURNS];    //������
    int def[TURNS];    //������
    int crt[TURNS];    //������
    int evd[TURNS];    //������   ��֪����������ʲô�õľ�û����
}p[2];
int t = 0 ;

int ran(int, int);      //���������������
void body_show(int);            //��ʾ�������
void atk(void);

int main(void)
{
    srand(time(0));
    for(;! p[0],hp[t] && ! p[1],hp[t] ; t ++)
    body_show(0);
    return 0;
}

int ran(int ran_var_0, int ran_var_1)
{
    int ran_rst;
    ran_rst = rand() % (ran_var_1 - ran_var_0 + 1) + ran_var_0;
    return ran_rst;
}

void body_show(int pi)
{
    printf("Player: %d\t",pi);
    printf("Current HP: %d\t",p[pi].hp[t]);
    printf("Lose HP: %d\t",p[pi].hp[t] - p[pi].hp[t-1]);
}

/**
int ran(int ran_var_0, ...)
{
    int ran_var_1;
    int ran_rst;
    int ran_num;
    int ran_chr[10];
    va_list ran_vars;
    va_start(ran_vars, ran_var_0);
        ran_num = _vsnprintf(ran_chr, 10, &ran_var_0, ran_vars);
        ran_var_1 = va_arg(ran_vars, int);
    va_end(ran_vars);
    printf("\n%d\n%d",ran_num,ran_var_1);
        if (ran_num == 1)
            ran_rst = rand() % ran_var_0;
        else
            ran_rst = rand() % (ran_var_1 - ran_var_0) + ran_var_0;
    return ran_rst;
}
**/
