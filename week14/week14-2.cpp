#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("請輸入一行字: ");
    gets(s);
    printf("你讀入了: %s\n", s);

    printf("請輸入英文名字: ");
    scanf("%s", s);
    printf("你的英文名子是: %s", s);

    printf("請再次輸入英文名字: ");
    scanf("%c", &c);
    printf("結果讀到了: %c", c);
}
