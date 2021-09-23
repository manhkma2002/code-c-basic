#include<stdio.h>

int fibonaci(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}

int main() {
    int n, tmp;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        tmp = fibonaci(i);
        if(tmp > n) {
            break;
        }
        else {
            printf("%-5d", tmp);
        }
    }
}