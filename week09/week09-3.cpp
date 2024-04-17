#include <stdio.h>
int main()
{
    printf("請輸入4個字母:\n");
    char line[5];
    scanf("%s", line);
    printf("這行字是:%s 裡面的字,分別是\n", line);

    for(int i=1; i<5; i++){
        printf("第%d個字母: %c 對應的數字是: %d\n", i, line[i], line[i]);
    }
}
