/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : JumDeret.c
   Deskripsi    : Menghitung jumlah total deret bilangan 
*/

#include <stdio.h>

int main()
{
    int n, i, total =0;
    printf("Masukan bilangan");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf ("n harus positif\n");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            total += i;
        }
    }
    printf ("%d", total);
    return 0;
}

