#include <iostream>
using namespace std;

int main() {
    long long totaldetik;
    int jam,menit,detik;

    cout<<"masukan bilangan >1"<<endl;
	cin>>totaldetik;
	
	
	
    jam = totaldetik / 3600;
    long long sisadetik = totaldetik % 3600;

    menit = sisadetik / 60;
    detik = sisadetik % 60;
    
    cout<<endl;
    
    cout<<"hasil konversi : "<< jam << "jam" << menit << "menit " << detik << "detik "<<endl;

}   
