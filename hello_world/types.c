#include <stdio.h>

int main()
{
    /*
    * %d = int
    * %f = float/ double
    * %c = char
    * %s = cadeia de char
    * %e = notação
    * %hd = short int
    * %ld = long int
    * %hu unsigned short
    * %u unsigned
    * %lu unsigned  long
    */

   /*
   * Tipos primitivos
   * char
   * int -- short - long - signed - unsigned
   * float
   * double
   * void
   */
    unsigned int year = 27;
    char name[] = "Rhuan";
    char *name_point = "Rhuan";
    char fist_letter_name = 'R';
    float size = 1.69;
    double size_d = 1.69;
    printf("%c, %s, %s, %d, %.2f, %.1f", fist_letter_name, name, name_point, year, size, size_d);
    return 0;
}