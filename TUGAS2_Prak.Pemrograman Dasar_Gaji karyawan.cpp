/* Muhammad Rizky cavendio-20051397011
Tugas ke-2 dari Praktek Pemrograman Dasar*/

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
 
{
char golongan, nama [50];
long int jamlembur,totjam,totgaji,gaji,bonus;

cout<<"Masukkan nama pendek saja, misalnya : dio\n";
cout<<"Masukkan salah satu Golongan Kerja antara a-d/A-D\n\n";
cout<<"==========MEGHITUNG GAJI KARYAWAN==========";
cout<<"\n\n";
cout<<"Maukkan Nama :";cin>>nama;
cout<<"Masukkan Golongan Kerja Anda :";cin>>golongan;
cout<<"\n\n";
switch (toupper(golongan))
{
	case'A':
		cout<<"Upah kerja perjam Rp. 5000\n";
		break;
	case'B':
		cout<<"Upah kerja perjam Rp. 7000\n";
		break;
	case'C':
		cout<<"Upah kerja perjam Rp. 8000\n";
		break;
	case'D':
		cout<<"Upah kerja perjam Rp. 10.000\n";
		break;
}
if (golongan=='A'||golongan=='a')
{
	cout<<"Total Jam Kerja Golongan A : ";cin>>totjam;
	jamlembur=totjam-48;
	totgaji=240000+(jamlembur*4000);
	cout<<"\n\n";
	cout<<"Nama Karyawan = "<<nama;
	cout<<"\n";
	cout<<"Total Gaji Minggu Ini : Rp. "<<totgaji;
}
if (golongan=='B'||golongan=='b')
{
	cout<<"Total Jam Kerja Golongan B : ";cin>>totjam;
	jamlembur=totjam-48;
	totgaji=336000+(jamlembur*4000);
	cout<<"\n\n";
	cout<<"Nama Karyawan : "<<nama;
	cout<<"\n";
	cout<<"Total Gaji Minggu Ini : Rp. "<<totgaji;
}
if (golongan=='C'||golongan=='c')
{
	cout<<"Total Jam Kerja Golongan C : ";cin>>totjam;
	jamlembur=totjam-48;
	totgaji= 384000+(jamlembur*4000);
	cout<<"\n\n";
	cout<<"Nama Karyawan :"<<nama;
	cout<<"\n";
	cout<<"Total Gaji Minggu Ini : Rp. "<<totgaji;
}
if (golongan=='D'||golongan=='d')
{
	cout<<"Total Jam Kerja D : ";cin>>totjam;
	jamlembur=totjam-48;
	totgaji= 480000+(jamlembur*4000);
	cout<<"\n\n";
	cout<<"Nama Karyawan : "<<nama;
	cout<<"\n";
	cout<<"Total Gaji Minggu Ini : Rp. "<<totgaji;
}
cout<<"\n\n";
cout<<"==========Selamat Gajian==========";
cout<<"\n\n\n\n\n";
cout<<"By  : Muhammad Rizky Cavendio\n";
cout<<"NIM : 20051397011";
return 0;
}

	


