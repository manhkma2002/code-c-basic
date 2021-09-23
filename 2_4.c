#include<stdio.h>
#include<math.h>

int tong_chu_so(int n) {
    int sum = 0;
    int tmp;
    while(n>0) {
        tmp = n % 10;
        sum += pow(tmp, 3);
        n /= 10;
    }
    return sum;
}

void kiem_tra_so_amstrong() {
    for(int i=100; i<=1000; i++) {
        if(i == tong_chu_so(i)) {
            printf("%-5d", i);
        }
    }
}

int main() {
    kiem_tra_so_amstrong();
}