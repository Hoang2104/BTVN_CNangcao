#include <stdio.h>

void input_array(int array[], int length){
    printf(">> Nhap vao mang:\n");
    for (short i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    
}

void show_arrray(int array[], int length){
    printf(">> Mang: ");
    for (short i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf(">> Nhap vao kich thuoc mang:\n");
    scanf("%d", &n);
    int a[n];
    input_array(a,n);
    show_arrray(a,n);
    
    return 0;
}
