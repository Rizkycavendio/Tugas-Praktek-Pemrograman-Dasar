/* Muhammad Rizky Cavendio - 20051397011
   TUGAS 3 NO. 7*/

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
int n,i,j;
cout<<"Loop Bersarang --> Angka Segitiga\n";
cout<<"Masukkan Tinggi Segitiga ";cin>>n;
for (i=1;i<=n;i++)
{
for (j=1;j<=i;j++)
{
cout<<""<<j;
}	
cout<<"\n";
}
for (i=n-1;i>=1;i--)
{
for (j=1;j<=i;j++)
{
cout<<""<<j;
}	
cout<<"\n";
}
getch();		
}
