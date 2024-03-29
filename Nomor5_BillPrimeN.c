/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : BillPrimeN.c
   Deskripsi    : Mengecek dan menampilkan inputan atau masukan apakah bernilai prima atau bukan dengan masukan int sembarang
*/


#include <stdio.h>

int main() {
    int N;

    //Algoritma
    printf("Masukkan sebuah bilangan integer positif N: ");
    scanf("%d", &N);

    
    printf("Bilangan prima sampai dengan %d adalah: ", N);
    for (int num = 2; num <= N; num++) {
        int is_prime = 1; // true

        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // false
                break;
            }
        }

        
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
