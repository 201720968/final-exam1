#include<stdio.h>

struct inform
{
    char code;
    char name;
    double kor;
    double math;
    double eng;
    double avg;
};

int main(void)
{
    struct inform hello[100];
    int *temp;
    int i=1;
    int j;
    int ch1,ch2,ch3,ch4,ch5;
    double avg[100];

    ch1=scanf("%s",&hello[0].code);
    ch2=scanf("%s",&hello[0].name);
    ch3=scanf("%lf",&hello[0].kor);
    ch4=scanf("%lf",&hello[0].math);
    ch5=scanf("%lf",&hello[0].eng);
    hello[0].avg=(hello[0].kor+hello[0].math+hello[0].eng)/3;

    while((ch1==EOF)&&(ch2==EOF)&&(ch3==EOF)&&(ch4==EOF)&&(ch5==EOF))
    {
        ch1=scanf("%s",&hello[i].code);
        if(ch1==EOF)
        {
            break;
        }
        ch2=scanf("%s",&hello[i].name);
        if(ch2==EOF)
        {
            break;
        }
        ch3=scanf("%lf",&hello[i].kor);
        if(ch3==EOF)
        {
            break;
        }
        ch4=scanf("%lf",&hello[i].math);
        if(ch4==EOF)
        {
            break;
        }
        ch4=scanf("%lf",&hello[i].eng);
        if(ch5==EOF)
        {
            break;
        }
        hello[i].avg=(hello[i].kor+hello[i].math+hello[i].eng)/3;
        i++;
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(hello[i].avg<hello[j].avg)
            {
            }
        }
    }

}
