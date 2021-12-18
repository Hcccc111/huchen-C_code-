#include<stdio.h>
int f[50] = { 0 };
int Fibonacci(int n) {
    // write code here
//     if(n<=2)
//         return 1;
//     return Fibonacci(n-1)+Fibonacci(n-2);
    if (n <= 2)
        return 1;
    if (f[n] > 0)
        return f[n];
    return f[n] = (Fibonacci(n - 1) + Fibonacci(n - 2));
}
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int b=Fibonacci(n);
    printf("%d", b);
    return 0;

}