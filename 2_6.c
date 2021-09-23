#include<stdio.h>

int fibonaci(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}

int main() {
    int n, tmp;
    int flag = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        tmp = fibonaci(i);
        if(n == tmp) {
            printf("%d thuoc day fibonaci", n);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("%d khong thuoc day fibonaci", n);
    }
}