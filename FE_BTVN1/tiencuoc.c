#include<stdio.h>

void hienThi(int a){
    printf("So tien la: %d\n", a);
}
int main(int argc, char const *argv[])
{
    float km;
    float sotien, a, b;
    char c;
    for (;;)    
    {    
        printf("Nhap so Km: ");
        scanf("%f",&km);
        a = km - 30;
        b = km - 1;
        if (b <= 0)
        {
            hienThi(5000*km);
        } else if ((a <= 0) && (b > 0))
        {
            hienThi(5000 + b*4000);
        }
        else if (a > 0)
        {
            hienThi(5000 + 29*4000 + a*3000);
        }

        printf("Ban co muon nhap tiep khong? [Y/N]");
        c = getch();
        printf(" %c\n", c);
        if (c == 'N')
        {
            break;
        }else continue;
    }
    
    return 0;
}
