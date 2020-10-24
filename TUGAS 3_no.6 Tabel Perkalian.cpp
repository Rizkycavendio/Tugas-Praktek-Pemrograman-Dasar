/* Muhammad Rizky Cavendio - 20051397011
   TUGAS 3 no.6 mebuta tabel perkalian */
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
int i,j;
cout<<"Membuat Tabel Perkalian";
cout<<"\n";

for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{
cout<<setw(5)<<i*j;
}	
cout<<"\n";
}
getch();
}
