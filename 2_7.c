#include<stdio.h>
#include<math.h>

int so_chinh_phuong(int n) {
    if(sqrt(n) * sqrt(n) == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(so_chinh_phuong(n) == 1) {
        printf("%d la so chinh phuong", n);
    }
    else {
        printf("%d khong la so chinh phuong", n);
    }
}