#include <locale.h>
#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES


int def_1();
int def_2();
int def_3();


int main(){
    setlocale(LC_ALL, ".UTF8");

    // def_1();
    def_2();
    // def_3();

    return 0;
}


int def_1(){
    char c;
    scanf("%c", &c);

    switch (c)
    {
    case '1':
        printf("Это цифра");
        break;
    case 'a':
        printf("Это буква");
        break;
    default:
        break;
    }

    return 0;
}


int def_2(){
    char c;
    double a, b;
    scanf("%lf%c%lf", &a,&c,&b);

    switch (c)
    {
    case '+':
        printf("%lf", a + b);
        break;
    case '-':
        printf("%lf", a - b);
        break;
    default:
        break;
    }

    return 0;
}

