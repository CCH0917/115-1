#include <stdio.h>
int main()
{
    float base,height,area;

    printf("請輸入三角形的底(cm):");
    scanf("%f",&base);
    printf("請輸入三角形的高(cm):");
    scanf("%f",&height);

    area=(base*height)/2;
    printf("%.2f",area);

    return 0;
}