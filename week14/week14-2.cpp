#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("�п�J�@��r: ");
    gets(s);
    printf("�AŪ�J�F: %s\n", s);

    printf("�п�J�^��W�r: ");
    scanf("%s", s);
    printf("�A���^��W�l�O: %s", s);

    printf("�ЦA����J�^��W�r: ");
    scanf("%c", &c);
    printf("���GŪ��F: %c", c);
}
