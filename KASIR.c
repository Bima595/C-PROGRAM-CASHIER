#include <stdio.h>

int main()
{
	char lagi='y'; ///MENGULANG KE AWAL PROGRAM KARNA
	do{ ///PERULANGAN
	int nomor, harga, bayar, i=1,total_akhir=0;
	char pilih='Y'; 
	printf("-----------------------------------------\n"); 
	printf("|       WARUNG MAKAN PAK BON BON        |\n"); 
	printf("|          ANDA KENYANG KAMI            |\n");
	printf("|               SENANG :)               |\n");
	printf("-----------------------------------------\n"); 
	printf("PILIH MENU ANDA	: \n");
	printf("1. AYAM BAKAR KECAP	Rp15.000\n 2. MIE GORENG		Rp10.000\n 3. IKAN GURAME		Rp25.000\n 4. BAKSO TITIL		Rp8.000\n 5. ES TEH		Rp2.000\n 6. ES DOGER		Rp5.000\n");

	while(pilih=='Y'){ ///PERULANGAN MENU 
		printf("-----------------------------------------\n"); 
		printf("MASUKKAN PESANAN KE %d: ",i);
		scanf("%d", &nomor);
		printf("-----------------------------------------\n"); 
		
	if(nomor==1){
		int total,jumlah;///UNTUK HASIL HARGA DI KALI PORSI/JUMLAH YANG DI BELI
		harga = 15000;
		printf("AYAM BAKAR = %d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah; ///TOTAL HARGA PESANAN TIAP MENU
		printf("total : %d\n",total);
		total_akhir=total_akhir+total; ///TOTAL HARGA KESELURUHAN MAKANAN
	}else if(nomor==2){
		int total,jumlah;
		harga = 10000;
		printf ("2. MIE GORENG =%d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah;
		printf("total : %d\n",total);
		total_akhir=total_akhir+total; 
	}else if(nomor==3){
		int total,jumlah;
		harga = 25000;
		printf("IKAN GURAME = %d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah;
		printf("total : %d\n",total);
		total_akhir=total_akhir+total;
	}else if(nomor==4){
		int total,jumlah;
		harga = 8000;
		printf("BAKSO TITIL = %d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah;
		printf("total : %d\n",total);
		total_akhir=total_akhir+total;
	}else if(nomor==5){
		int total,jumlah;
		harga = 2000;
		printf("ES TEH = %d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah;
		printf("total : %d\n",total);
		total_akhir=total_akhir+total;
	}else if(nomor==6){
		int total,jumlah;
		harga = 5000;
		printf("ES DOGER = %d\n",harga);
		printf ("jumlah yang di beli : ");
		scanf("%d",&jumlah);
		total = harga*jumlah;
		printf("total : %d\n",total);
		total_akhir=total_akhir+total;
	}else
	{
		printf("TIDAK ADA DI MENU !!");
		break;
	}
	
	printf("-----------------------------------------\n"); 
	printf("MAU NAMBAH MENU LAGI (Y/N): ");	
	scanf(" %c", &pilih);
	i++; ///PENAMBAHAN JUMLAH TEXT 
	}
	printf("BARANG YANG DI BELI :%d\n",nomor);
	printf("TOTAL HARGA = %d\n",total_akhir);///TOTAL SEMUA PESANAN YANG DI PILIH
	printf("TUNAI :");
	scanf(" %d",&bayar);
	if(bayar<total_akhir){
		printf("-----------------------------------------\n"); 
		printf("UANG ANDA KURANG !!!!\n");
		printf("-----------------------------------------\n"); 
		break;///UNTUK STOP ME LOOPING 
	}
	else
	{
	printf("KEMBALIAN : %d\n",bayar-total_akhir);
	}
	printf("MAU PESAN LAGI [y/t]");
	scanf(" %c",&lagi);
	}while (lagi == 'y');
	printf("-------------------------------------------\n");
	printf("|     TERIMA KASIH ATAS KUNJUNGAN ANDA    |\n");
	printf("|        KAMI AKAN MENUNNGU ANDA          |\n");
	printf("|             DI LAIN WAKTU               |\n");
	printf("-------------------------------------------\n");
	
	
	return 0;
}