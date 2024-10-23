#define  _CRT_SECURE_NO_DEPRECATE
#define N 10
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    float A[10];
    float S = 0;
    int k = 0;
    for (int i = 0; i < 10; i++)

    {

        printf("a[%d] = ", i + 1);
        float temp;
        scanf("%f", &temp);

        A[i] = temp;


    }

    float B[10];

    for (int i = 0; i < 10; i++) {
        B[i] = A[i] / 10;
      
    }
    puts("|\tиндекс\t|старое значение|новое значение |");
    for (int i = 0; i < 10; i++)
    {
    
        S += A[i];
        k += 1;
        printf("\n|\t %d\t|\t%.2f\t|\t%.2f\t|\n", i, A[i], B[i]);
      
    }
    
    
    printf("\nСреднее значение элементов массива=%.2f", S/k);
}