///�禡/��� function
#include <stdio.h>
///���Ѽƶi�� int a
void myPrint(int a){
    for(int i=0; i<a; i++) printf("�P");
    printf("\n");
    ///�S��return,�S���ѼƥX�h
}

int main()
{///�D�n���禡
    myPrint(5);
    myPrint(4);
    myPrint(3);
    myPrint(2);
    myPrint(1);
}