#include <stdio.h>

// tạo hàm nhập các ký tự
void input_array(int array[], int length){
    for (short i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    
}

// Hàm xuất mảng
void show_array(int array[], int length){
    for (short i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Hàm sắp xếp mảng từ bé đến lớn
void insertionSortup(int array[], int length){
    int j, last;
    for (int i = 1; i < length; i++)
    {
        last = array[i];
        j = i;

        while ((j > 0) && (array[j - 1] - last > 0))
        {
            array[j] = array[j - 1];
            j -= 1;
            array[j] = last;
        }
        
    }
    
}

void insertionSortdown(int array[], int length){
    int j, last;
    for (int i = 1; i < length; i++)
    {
        last = array[i];
        j = i;
        while ((j > 0) && (array[j-1] < last))
        {
            array[j] = array[j-1];
            array[j-1] = last;
            j -= 1;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Nhap vao kich thuoc mang a:\n");
    scanf("%d",&n);
    int a[n];

    // Nhập chuỗi
    printf("Nhap chuoi:\n");
    input_array(a,n);
    printf("Xuat chuoi:");
    show_array(a,n);

    insertionSortup(a,n);
    show_array(a,n);

    insertionSortdown(a,n);
    show_array(a, n);

    
    return 0;
}
