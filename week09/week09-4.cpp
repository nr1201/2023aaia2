///�r�ꪺ�禡
#include <stdio.h>
#include <string.h>///�r��禡
int main()
{
    char line[100];
    printf("�п�J�@��r��,���n���Ů�,�̫���浲����J\n");
    scanf("%s", line);

    int N = strlen(line);
    printf("�r�ꪺ���׬O:%d\n", N);
    ///strcpy(a, "Hello"); �r�����
    ///strcat(a, b); �r�굲�X(��k��b���쥪��a���᭱)
    ///strcmp(a, b); �r����(�v�r���,�ݽ֤���j)
}
