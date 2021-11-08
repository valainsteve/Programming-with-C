/*
* Programm zur Demonstration der Inkrementierungsoperatoren
*/

#include <stdio.h>

int main()
{
    int i=1;
    printf("i = %d \n", i);   /* i=1 */
    i++;
    printf("i = %d \n", i);   /* i=2 */
    printf("i = %d \n", i++); /* i=2 */
    printf("i = %d \n", i);   /* i=3 */
    printf("i = %d \n", ++i); /* i=4 */

    getchar();
    getchar();
    return 0;
}
