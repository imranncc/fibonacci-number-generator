#include <stdio.h>

int fibonacci(int i){
    if(i == 1) return 0;
    else if(i == 2) return 1;
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {
    int n, i;

    printf("Please enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);
    
    printf("First %d Fibonacci numbers:\n", n);
    
    for(i = 1; i <= n; i++){
        printf("%d\n", fibonacci(i));
    }

    return 0;
}
