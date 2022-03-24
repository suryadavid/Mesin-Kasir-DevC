#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <iostream>
using namespace std;

struct penjualan
{
 float liter;
 float hasil;
 int n;
} Grade;

int main()
{
	
 time_t now = time(0);
 char* dt = ctime(&now);
 
 printf ("SPBU 54 613 32\n");
 printf ("\nJl. Empunala 408-410\n");
 printf ("1.Pertamax 2.Pertamax Turbo 3.Premium 4.Pertamina Dex 5.Pertalite 6.Dexlite\nMasukan jenis Grade : ");
 
 scanf ("%d", &Grade.n);
 printf ("Masukan pembelian perliter : ");
 scanf ("%f", &Grade.liter);
 
 printf ("\n\n\n\n");
 printf ("SPBU. 54 613 32\n");
 printf ("\nJl. Empunala 408-410\n");



 printf ("Mojokerto\n");
 printf ("0321 321694\n");
 
 cout<<dt<<endl; 
 printf ("Recept No   007408\n");



 {
  
  if (Grade.n == 1)
  {
   Grade.hasil = 9000 * Grade.liter;
   printf ("Grade     : Pertamax\n");
  }
  else
   if (Grade.n == 2)
   {
    Grade.hasil = 9850 * Grade.liter;
    printf ("Grade     : Pertamax Turbo\n");
   }
   else
    if (Grade.n == 3)
    {
     Grade.hasil = 7000 * Grade.liter;
     printf ("Grade     : Premium\n");
    }
    else
     if (Grade.n == 4)
     {
      Grade.hasil = 8400 * Grade.liter;
      printf ("Grade     : Pertamina Dex\n");
     }
     else
      if (Grade.n == 5)
      {
       Grade.hasil = 7650 * Grade.liter;
       printf ("Grade     : Pertalite\n");
      }
      else
       if (Grade.n == 6)
       {
        Grade.hasil = 9500* Grade.liter;
        printf ("Grade     : Dexlite\n");
       }
 }
 printf ("Volume         : %.2f\n", Grade.liter);
 printf ("Unit Price     : Rp. %.f\n", Grade.hasil/Grade.liter);
 printf ("Amount         : Rp. %.f\n", Grade.hasil);
 
 
 printf ("\nVehicle No.             Not Entered\n");
 printf ("Terima kasih & selamat jalan");
}
