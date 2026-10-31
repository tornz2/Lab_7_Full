#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, ".UTF8");


    //Варик 5
    int number;
    scanf("%d", &number);

    switch (number)
    {
    case 12:
    case 1:
    case 2:
        printf("Зима");
        break;
    case 3:
    case 4:
    case 5:
        printf("Весна");
        break;
    case 6:
    case 7:
    case 8:
        printf("Лето");
        break;
    case 9:
    case 10:
    case 11:
        printf("Осень");
        break;
    default:
        printf("Не больше 12");
    }

    
    return 0;
}