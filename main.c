#include <stdio.h>

/*
 * Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.
 */
int main() {

    int c, ns = 0;
    int flag = 1;

        printf("Enter string: ");
        printf("\n");
        while(flag == 1)
        {
            c = getchar();

            if(c != ' ')
            {
                ns = 0;
            }

            else if(c == ' ')
            {
                ++ns;
            }

             if(ns <= 1)
            {
                printf("%c", c);
            }

            if(c == '\n')
            {
                flag = 0;
            }
        }

    printf("\n");
    return flag;
}