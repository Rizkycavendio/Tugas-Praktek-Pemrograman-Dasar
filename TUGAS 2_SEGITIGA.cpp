//Muhammad Rizky Cavendio-20051397011
//Praktek Pemrograman Dasar
//Membuat program menghitung segitiga

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	char pilih,s;
	/*a:Alas 
	t:Tinggi
	m:Sisi miring
	l:Luas
	k:Keliling*/
	float a,t,m,l,k;
	int ya,tidak;
	
	cout<<"===============================\n\n";
	cout<<"Menghitung Segitiga Siku-siku\n";
	cout<<"Menu Pilihan\n";
	cout<<"1. Hitung Panjang Sisi Miring\n";
	cout<<"2. Hitung Luas\n";
	cout<<"3. Hitung Keliling\n";
	cout<<"4. Exit/Keluar\n";
	cout<<"pilih (1-4): ";cin>>pilih;
	cout<<"===============================\n\n";
	
	switch (pilih)
	{
		case '1':
			cout<<"Menghitung panjang sisi miring Segitiga Siku-siku\n";
			cout<<"Panjang sisi alas   :\n";cin>>a;
			cout<<"Panjang sisi tinggi :\n";cin>>t;
			m = sqrt((a*a)+(t*t));
            cout <<"\n";
            cout <<" Hasilnya adalah : " << m <<endl;
            
        case '2':
        	cout<<"Menhitung Luas\n";
        	cout<<"Masukkan Nilai Panjang Alas Segitiga Siku-Siku\n:";
            cin>>a;
            cout<<"Masukkan Nilai Tinggi Segitiga Siku-Siku \n:";
            cin>>t;
            l=(0,5*a*t);
            cout<<"Maka Luas Segitiga :"<<l<<"\n";
            
        case '3':
        	cout<<"Menghitung Keliling\n";
            cout<<"Masukkan Nilai ALAS        :";
			cin>>a;
            cout<<"Masukkan Nilai TINGGI      :";
			cin>>t;
            cout<<"Masukkan Nilai sisi miring :";
			cin>>m;
            k=a+t+m;
            cout <<"Maka KELILING segitiga siku-siku : "<<k;
            cout <<"\n";
        
        case'4':
        	cout<<" Apakah anda ingin keluar dari program:\n";
        	cout<<"[y] Ya [n] Tidak \n"; cin>>s;
            cout<<"=======================================\n";
}

            if(s=='y'||s=='Y'){
            cout<<"KELUAR PROGRAM";
			exit(0);
}
	        else if(s=='n'||s=='N'){
	        cout<<"Kembali ke menu utama";
}
            else{
            cout<<"PILIHAN TIDAK ADA";	
}
			return 0;
}



