#include<stdio.h>

int main() {
    int a, b, bcnn;

    do {
        printf("Nhap lan luot 2 so a, b: \n");
        scanf("%d%d", &a, &b);
    }while(a <= 0 || b <= 0);

    for(int i=a>b ? a:b; i<=a*b; i++) {
        if(i%a == 0 && i%b == 0) {
            bcnn = i;
            break;
        }
    }
    printf("BCNN cua %d va %d la %d", a, b, bcnn);
}