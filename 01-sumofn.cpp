#include<stdio.h>

int main() {
    int n,i;
    int sum=0;

    for(i=0;i<=n;i++){
        sum = sum + i;
    }

    printf("The sum of n natural numbers is : %d",sum);

    return 0;
}