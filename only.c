#include <stdio.h>

void ones(int number);
void tenTo_19(int number);
void twentyTo_90(int number);
void less_100(int number);
void less_1000(int number);
void less_million(int number);
void only(int number);

void main(void)
{
    int number;
    printf("Please number: ");
    scanf("%d",&number);
    only(number);
    printf("only");
}
void ones(int number)
{
    switch(number)
    {
        case 1: printf("one ");         break;
        case 2: printf("two ");         break;
        case 3: printf("three ");       break;
        case 4: printf("four ");        break;
        case 5: printf("five ");        break;
        case 6: printf("six ");         break;
        case 7: printf("seven ");       break;
        case 8: printf("eight ");       break;
        case 9: printf("nine ");        break;
    }
}
void tenTo_19(int number)
{
    switch(number)
    {
        case 10: printf("ten ");        break;
        case 11: printf("elven ");      break;
        case 12: printf("twelve ");     break;
        case 13: printf("thirteen ");   break;
        case 14: printf("fourteen ");   break;
        case 15: printf("fifteen ");    break;
        case 16: printf("sixteen ");    break;
        case 17: printf("seventeen ");  break;
        case 18: printf("eighteen ");   break;
        case 19: printf("nineteen ");   break;
    }
}
void twentyTo_90(int number)
{
    switch(number)
    {
        case 2: printf("twenty ");     break;
        case 3: printf("thirty ");     break;
        case 4: printf("fourty ");     break;
        case 5: printf("fifty ");      break;
        case 6: printf("sixty ");      break;
        case 7: printf("seventy ");    break;
        case 8: printf("eighty ");     break;
        case 9: printf("ninety ");     break;
    }
}
void less_100(int number)
{
    if(number < 10) ones(number);
    else if (number < 20) tenTo_19(number);
    else
    {
        twentyTo_90(number/10);
        ones(number%10);
    }
}
void less_1000(int number)
{
    if(number < 100) less_100(number);
    else
    {
        less_100(number/100);
        printf("hundred ");
        less_100(number%100);
    }
}
void less_million(int number)
{
    if(number < 1000) less_1000(number);
    else
    {
        less_1000(number/1000);
        printf("thousand ");
        less_1000(number%1000);
    }
}
void only(int number)
{
    if(number == 0) printf("zero ");
    else if(number < 1000000) less_million(number);
    else
    {
        less_million(number/1000000);
        printf("million ");
        less_million(number%1000000);
    }
}
