///�n���ܼƽd�� variable scope
#include <stdio.h>
int z = 100;///�~���� global variable �����ܼ�
void myFunc(){///�ڪ��禡
    int x = 20;///�̭��� local variable �ϰ��ܼ�
    printf("myFunc()�̪� x �O: %d\n", x, z);
    printf("�b���}�ɡA����� x �M z ���]��0\n");
    x = 0;
    z = 0;
}

int main()///�D�禡
{
    int x = 10;///�̭��� local variable �ϰ��ܼ�
    printf("main()  �̪� x: %d z: %d\n", x, z);
    myFunc();
    printf("main()  �̪� x: %d z: %d\n", x, z);
}