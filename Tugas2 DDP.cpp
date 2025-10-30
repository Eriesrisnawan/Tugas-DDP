#include <iostream>
using namespace std;

int main() {
    long long totaldetik;
    long long hari,jam,menit,detik;

    cout<<"masukan bilangan >1"<<endl;
	cin>>totaldetik;
	
	hari = totaldetik / 86400;
	long long sisadetik = totaldetik % 86400;
	
    jam = sisadetik / 3600;
     sisadetik = sisadetik % 3600;

    menit = sisadetik / 60;
    detik = sisadetik % 60;
    
    cout<<endl;
    
    cout<<"hasil konversi : "<<hari<<"hari"<< jam << "jam" << menit << "menit " << detik << "detik "<<endl;

}   
