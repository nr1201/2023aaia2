#include <stdio.h>
int main()
{
    printf("�п�J4�Ӧr��:\n");
    char line[5];
    scanf("%s", line);
    printf("�o��r�O:%s �̭����r,���O�O\n", line);

    for(int i=1; i<5; i++){
        printf("��%d�Ӧr��: %c �������Ʀr�O: %d\n", i, line[i], line[i]);
    }
}
