#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%x", &a); //����������� ����� � 16
    printf("%o\n", a); //������� � 8

    printf( "%x\n", a, a << 3); //����� ����� �� 3

    printf("%x %x\n", a, ~a); //������� �������� -

    scanf("%o", &b);
    printf("%o", a^b); //����������� ���
}
