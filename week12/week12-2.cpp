///列出n以下的全部質數
#include <stdio.h>
int isPrime(int n)
{
    for(int i=2; i<n; i++) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    printf("請輸入1個整數:");
    int n;
    scanf("%d", &n);
    int ans =0;
    for(int i=2; i<n; i++){
        if(isPrime(i)) {
            printf("%d ", i);
            ans ++;
        }
    }
    printf("總共有 %d 個質數\n", ans);
}
