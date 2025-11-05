#include <iostream>
using namespace std;

int main() {
	long long totaldetik;
	long long jam,menit,detik,sisa;
	
	cout << "=== Program Konversi Waktu ===\n";
	cout << "Masukan Bilangan >1 (satuan detik) : ";
	cin >> detik;
	
	if(detik <= 1) {
		cout << "input tidak valid harus lebih dari 1 detik. \n";
	
	jam = detik / 3600;
	sisa = detik % 3600;
	menit = sisa / 60;
	int detik_akhir = sisa % 60;
	
	cout << "Waktu total setara dengan " << jam << " jam "
	     << menit << " menit dan " << detik_akhir << " detik. \n";
	     
	     return 0;
	}
}
