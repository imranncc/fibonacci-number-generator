# fibonacci-number-generator

This program generates the first N Fibonacci numbers.

## Usage

Compile the program using a C compiler, such as GCC, and run the executable.

```bash
gcc fibonacci.c -o fibonacci
./fibonacci
```

## Functionality
The fibonacci function calculates the Fibonacci number for a given index i.

```c
#include <stdio.h>

int fibonacci(int i){
    if(i == 1) return 0;
    else if(i == 2) return 1;
    return fibonacci(i - 1) + fibonacci(i - 2);
}
```

The main function prompts the user to enter the number of Fibonacci numbers to display, then iterates over the range of numbers and prints each Fibonacci number.

```c
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
```

## Example

For example, if the user inputs 5, the program will output:

```
0
1
1
2
3
```
