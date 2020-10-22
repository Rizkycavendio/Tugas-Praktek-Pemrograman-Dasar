/* Muhammad Rizki Cavendio - 20051397011
   Tugas ke-5 program menghitung jumlah deret */
   
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main ()
{

int a=3,b=4,c,n=4,i,jumlah=0;	

 cout<<"========================================  \n";
 cout<<"    TUGAS MENGHITUNG JUMLAH NILAI DERET|  \n";
 cout<<"Muhammad Rizky Cavendio - 20051397011  |  \n";
 cout<<"========================================\n\n";
 cout<<"Angka Deret Pertama    :"<<a<<endl;
 cout<<"Beda Deretnya          :"<<b<<endl;
 cout<<"Jumlah Deretnya        :"<<n<<endl;
 cout<<"\n";
 cout<<"========================================\n";
 cout<<"Deretnya adalah        : "<<a<<",";
    
	jumlah=jumlah+a;  
    for(i=0; i<n-1; i++)
{
    c=a+b;
    a=c;
    jumlah=jumlah+c; 
    cout<<c<<",";
                        
} 
 cout<<"\n";
 cout<<"Jumlah deretnya adalah : "<<jumlah;
      
    getch();
    return 0;    
}




