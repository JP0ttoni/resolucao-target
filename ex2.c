#include<stdio.h>
void fibo(int fibo1, int fibo2, int num);

int main()
{
    int n;
    printf("digite o numero: ");
    scanf("%d", &n);
    fibo(0,1,n);
    return 0;
}

void fibo(int fibo1, int fibo2, int num)
{
    int result = fibo1 + fibo2;
    if(result == num)
    {
        printf("achou");
        return;
    } else if(result > num)
    {
        printf("nao achou");
        return;
    } else{
        fibo(fibo2, result, num);
    }
}