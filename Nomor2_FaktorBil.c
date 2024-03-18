/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : FaktorBil.c
   Deskripsi    : Menampilkan faktor dari sebuah bilangan
*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Masukan bilangan yang akan di cari faktor:");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("n Harus positif");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
               printf("%d\n", i); 
            }
        }
    }
    return 0;
    
}

