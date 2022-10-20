#include <iostream>
#include <conio.h>

using namespace std;
int ml();
int pubg();
int ff();
int gi();


//function
void beli(int harga);

int hitung(int harga);
float saldo, uang;



//Array
int harga1 [5]={15000,80000,240000,520000,1200000};
int harga2 [5]={15000,150000,375000,750000,1500000};
int harga3 [5]={20000,100000,200000,300000,500000};
int harga4 [5]={16000,79000,249000,479000,799000};


string nama, umur;

int main(){
	int menu;

	
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	cout<<"====================|  GAMES STORE  |====================\n";
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
    cout<<endl;
    cout<<endl;
    cout<<"Masukan Nama : ";
    getline(cin,nama);
    cout<<"Masukan Umur : ";
    getline(cin,umur);
    cout<<"Masukan Saldo Anda : ";
	cin>>saldo;
	uang=saldo;
    cout<<endl;
    system("cls");
    

    do{
    system("cls");
    	cout<<endl;
    	cout<<"............................................................................"<<endl;
		cout<<".                               SELAMAT DATANG                             ."<<endl;
		cout<<".                                GAMES STORE                               ."<<endl;
		cout<<"............................................................................"<<endl;
		cout<<endl;
		cout<<"## Selamat Datang Di Games Store Tempat TOP UP Murah, Aman, Dan Terpercaya ##"<<endl;
		cout<<"** Pilih Menu [1/2/3/4]  untuk melakukan Top up Game Yang Di inginkan ** "<<endl;
		cout<<endl;
    cout<<"-----------------------------------------------------------\n";
    cout<<"|                    1. Mobile Legends                    |\n";
    cout<<"|                    2. PUBG Mobile                       |\n";
    cout<<"|                    3. Free Fire                         |\n";
    cout<<"|                    4. Genshin Impact                    |\n";
    cout<<"|---------------------------------------------------------|\n";
    cout<<"|                    5. Cek Saldo                         |\n";
    cout<<"|                    6. Exit                              |\n";
    cout<<"-----------------------------------------------------------\n";
    cout<<"Pilih Menu : ";
    cin>>menu;
    switch(menu){
	case 1 :
	ml();
	getch();
		break;
	
	case 2 :
	pubg();
	getch();
		break;
	
	case 3 :
	ff();
	getch();
		break;
	
	case 4 :
	gi();
	getch();
		break;
	
	case 5 :
		system ("cls");
		cout<<"=========================================\n";
	    cout<<"========|      GAMES STORE      |========\n";
	    cout<<"=========================================\n";
	    cout<<endl;
	    cout<<"-----------------------------------------\n";
		cout<<"Saldo Anda		: RP. "<<saldo<<endl;
		
		getch();
		break;
	
	case 6:
		system ("cls");	
		cout<<"=========================================\n";
	    cout<<"========|      GAMES STORE      |========\n";
	    cout<<"=========================================\n";
				cout<<endl;
				cout<<"## TERIMA KASIH TELAH BERKUNJUNG KE GAME STORE ##"<<endl;
		break;
	default:
	system ("cls");	
	cout<<"=========================================\n";
	cout<<"========|      GAMES STORE      |========\n";
	cout<<"=========================================\n";
	cout<<"## MENU TIDAK TERSEDIA ##"<<endl;	
}
}while(menu==1 || menu <=5);

return 0;
}


int ml(){
	int item;
	int harga;
	int id;
	int saldo, uang;
	string name;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========|      GAMES STORE      |========\n";
	cout<<"========|     MOBILE LEGENDS    |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<"Masukan ID Game : ";
	cin>>id;
	cout<<"Masukan Name In Game : ";
    cin>>name;
	
	cout<<endl;
		
	
	system("cls");
	
	cout<<"Pilih Jumlah item Yang Ingin Dibeli \n";
	cout<<"==========================\n";
	cout<<"|    1. 50   Diamonds    |\n";
	cout<<"|    2. 250  Diamonds    |\n";
	cout<<"|    3. 770  Diamonds    |\n";
	cout<<"|    4. 1700 Diamonds    |\n";
	cout<<"|    5. 4000 Diamonds    |\n";
	cout<<"==========================\n";
	cout<<endl;
    cout<<"Masukkan  [1/2/3/4/5] : ";
	cin>>item;
	
	switch (item){
		case 1 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*            50 Diamonds            *"<<endl;
			cout<<"*        Harga :Rp.15.000           *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga1[0];
			beli(harga);
		break;
		
		case 2 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*            250 Diamonds           *"<<endl;
			cout<<"*          Harga :Rp.80.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga1[1];
			 beli(harga);
		break;
		
		case 3 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*            770 Diamonds           *"<<endl;
			cout<<"*          Harga :Rp.240.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga1[2];
			beli(harga);
		break;
		
		case 4 :
			system("cls");
			cout<<"*************************************"<<endl;
			cout<<"*            1700 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.520.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga1[3];
			beli(harga);
		break;
		
		case 5 :
		    system("cls");
		    cout<<"*************************************"<<endl;
			cout<<"*            4000 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.1.200.000      *"<<endl;	
			cout<<"*************************************"<<endl;
			harga =harga1[4];
		    beli(harga);
		break;
				
		default:
			system ("cls");	
			cout<<"## Pilihan Tidak Tersedia ##"<<endl;
		
	}

}

int pubg(){
	int item;
	int harga;
	int id;
	int saldo, uang;
	string name;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========|      GAMES STORE      |========\n";
	cout<<"========|      PUBG MOBILE      |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<"Masukan ID Game : ";
	cin>>id;
	cout<<"Masukan Name In Game : ";
    cin>>name;
	
	cout<<endl;
		
	
	system("cls");
	
	cout<<"Pilih Jumlah Item Yang Ingin Dibeli \n";
	cout<<"======================\n";
	cout<<"|    1.  60   UC     |\n";
	cout<<"|    2.  660  UC     |\n";
	cout<<"|    3. 1.800 UC     |\n";
	cout<<"|    4. 3.850 UC     |\n";
	cout<<"|    5. 8.100 UC     |\n";
	cout<<"======================\n";
	cout<<endl;
    cout<<"Masukkan  [1/2/3/4/5] : ";
	cin>>item;
	
	switch (item){
		case 1 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*               60 UC               *"<<endl;
			cout<<"*          Harga :Rp.15.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			
			harga=harga2[0];
			beli(harga);
		break;
		
		case 2 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*              660 UC               *"<<endl;
			cout<<"*         Harga :Rp.150.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga2[1];
			beli(harga);
		break;
		
		case 3 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*              1.800 UC             *"<<endl;
			cout<<"*         Harga :Rp.375.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga2[2];
			 beli( harga);
		break;
		
		case 4 :
			system("cls");
		    cout<<"*************************************"<<endl;
			cout<<"*             3.850 UC              *"<<endl;
			cout<<"*         Harga :Rp.750.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga2[3];
			beli(harga);
		break;
		
		case 5 :
		    system("cls");
		    cout<<"*************************************"<<endl;
			cout<<"*               8.100 UC            *"<<endl;
			cout<<"*         Harga :Rp.1.500.000       *"<<endl;	
			cout<<"*************************************"<<endl;
			harga =harga2[4];
		    beli(harga);
		break;
				
		default:
			system ("cls");	
			cout<<"Pilihan Tidak Tersedia"<<endl;
		
	}

}

int ff(){
	int item;
	int harga;
	int id;
	int saldo, uang;
	string name;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========|       GAMES STORE     |========\n";
	cout<<"========|        FREE FIRE      |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<"Masukan ID Game : ";
	cin>>id;
	cout<<"Masukan Name In Game : ";
    cin>>name;
	
	cout<<endl;
		
	
	system("cls");
	
	cout<<"Pilih Jumlah item Yang Ingin Dibeli \n";
	cout<<"==========================\n";
	cout<<"|    1.  140  Diamonds   |\n";
	cout<<"|    2.  720  Diamonds   |\n";
	cout<<"|    3. 1.450 Diamonds   |\n";
	cout<<"|    4. 2.180 Diamonds   |\n";
	cout<<"|    5. 3.640 Diamonds   |\n";
	cout<<"==========================\n";
	cout<<endl;
    cout<<"Masukkan  [1/2/3/4/5] : ";
	cin>>item;
	
	switch (item){
		case 1 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*            140 Diamonds           *"<<endl;
			cout<<"*          Harga :Rp.20.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga3[0];
			beli( harga);
		break;
		
		case 2 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*             720 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.100.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga3[1];
			 beli(harga);
		break;
		
		case 3 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*           1.450 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.200.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga3[2];
			 beli(harga);
		break;
		
		case 4 :
			system("cls");
			cout<<"*************************************"<<endl;
			cout<<"*           2.180 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.300.000        *"<<endl;	
			cout<<"*************************************"<<endl;	
			harga=harga3[3];
			beli( harga);
		break;
		
		case 5 :
		    system("cls");
		    cout<<"*************************************"<<endl;
			cout<<"*           3.640 Diamonds          *"<<endl;
			cout<<"*          Harga :Rp.500.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga = harga3[4];
		    beli( harga);
		break;
				
		default:
			system ("cls");	
			cout<<"Pilihan Tidak Ada"<<endl;
		
	}

}

int gi(){
	int item;
	int harga;
	int id;
	int saldo, uang;
	string name;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========|      GAMES STORE      |========\n";
	cout<<"========|     GENSHIN IMPACT    |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<"Masukan ID Game : ";
	cin>>id;
	cout<<"Masukan Name In Game : ";
    cin>>name;
	
	cout<<endl;
		
	
	system("cls");
	
	cout<<"Pilih Jumlah item Yang Ingin Dibeli \n";
	cout<<"=========================================\n";
	cout<<"|    1. 60          Genesis Crystals    |\n";
	cout<<"|    2. 300 + 30    Genesis Crystals    |\n";
	cout<<"|    3. 980 + 110   Genesis Crystals    |\n";
	cout<<"|    4. 1.980 + 260 Genesis Crystals    |\n";
	cout<<"|    5. 3.280 + 600 Genesis Crystals    |\n";
	cout<<"=========================================\n";
	cout<<endl;
    cout<<"Masukkan  [1/2/3/4/5] : ";
	cin>>item;
	
	switch (item){
		case 1 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*        60 Genesis Crystals        *"<<endl;
			cout<<"*         Harga :Rp.16.000          *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga4[0];
			beli( harga);
		break;
		
		case 2 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*       300 + 30 Genesis Crystals   *"<<endl;
			cout<<"*          Harga :Rp.79.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga4[1];
			 beli( harga);
		break;
		
		case 3 :
			system ("cls");	
			cout<<"*************************************"<<endl;
			cout<<"*     980 + 110 Genesis Crystals    *"<<endl;
			cout<<"*         Harga :Rp.249.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga4[2];
			 beli( harga);
		break;
		
		case 4 :
			system("cls");
			cout<<"*************************************"<<endl;
			cout<<"*   1.980 + 260 Genesis Crystals    *"<<endl;
			cout<<"*         Harga :Rp.479.000         *"<<endl;	
			cout<<"*************************************"<<endl;
			harga=harga4[3];
			beli( harga);
		break;
		
		case 5 :
		    system("cls");
		    cout<<"*************************************"<<endl;
			cout<<"*    3.280 + 600 Genesis Crystals   *"<<endl;
			cout<<"*          Harga :Rp.799.000        *"<<endl;	
			cout<<"*************************************"<<endl;
			harga = harga4[4];
		    beli( harga);
		break;
				
		default:
			system ("cls");	
			cout<<"## Pilihan Tidak Tersedia ##"<<endl;
	}

}

//function
void beli(int harga){
	string y;
	cout<<"Apakah anda ingin membeli (y/t) ? ";
	cin>>y;
		if(y=="y" || y=="Y"){
			cout<<endl;
			hitung(harga);
		} 
		else{
			system ("cls");	
		cout<<"=========================================\n";
	    cout<<"========|       GAME STORE      |========\n";
	    cout<<"=========================================\n";
			cout<<endl;
			cout<<"## PEMBELIAN TELAH DI BATALKAN ##"<<endl;
		}
}


int hitung(int harga){
		if(saldo >= harga){
			saldo = saldo - harga;
			cout<<"## Selamat Pembelian Telah Berhasil Dilakukan ##"<<endl;	
		}
		else{
			cout<<"## Maaf saldo anda tidak cukup, silahkan Lakukan Pembelian item yang lain ##"<<endl;
		}
	cout<<endl;
	}
