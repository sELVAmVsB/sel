#include <stdio.h>
#include<coniommf>
  int main() {
    int a[10];
    int i;
    int greatest;
    printf("Enter ten values:");

    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }
    
    greatest = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
    }
    printf(" %d", greatest);
    return 0;
  }
