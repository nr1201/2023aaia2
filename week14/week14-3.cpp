#include <stdio.h>
int main()
{
    int a = 5;
    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(999) printf("999成立\n");
    if(-1) printf("-1成立\n");
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
    if(0) printf("0不成立\\n");
}
