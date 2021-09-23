#include<stdio.h>

int main() {
    int a, b, ucln;

    do {
        printf("Nhap lan luot 2 so a, b: \n");
        scanf("%d%d", &a, &b);
    }while(a <= 0 || b <= 0);

    for(int i=a>b ? b:a; i>0; i--) {
        if(a%i == 0 && b%i == 0) {
            ucln = i;
            break;
        }
    }
    printf("UCLN cua %d va %d la %d", a, b, ucln);
}