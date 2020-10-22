/* Muhammad Rizky Cavendio - 20051397011
   Tugas Praktek Pemrograman Dasar ke-3
   Tugas No. 4 */
   
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,jumlah;
		
     cout<<"\n\n";
     cout<<"=======================================================\n\n";
     cout<<"~Tugas membuat progam menghitung jumlah 6 suku pertama~\n";
     cout<<"Muhammad Rizky Cavendio - 20051397011 \n\n";
     cout<<"=======================================================\n";
     cout<<"List 6(enam) suku pertama : \n";
     jumlah=0;
     for (a=1;a<=6;a++)
    
{
	 b=3;
	 c=pow(a,b);
	 jumlah=jumlah+c;
     cout<<"\n\n";
	 cout<<a<<" Pangkat "<<b<<" = "<<c;	 
}
     cout<<"\n\n";
     cout<<"\n Jika nilai semua suku dijumlahkan, maka hasilnya = "<<jumlah<<endl;
     cout<<"========================================================";

getch();
return 0;
}     

