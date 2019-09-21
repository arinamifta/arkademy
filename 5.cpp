#include <iostream>
using namespace std;

int main() {
	
    int uang, tanggal, hasil, jumlah_mie, bonus_ganjil, bonus_genap, hasil_bonus;
    cout<<"Masukkan Tanggal : ";
    cin>> tanggal;
	cout<<"Masukkan Jumlah Uang : ";
    cin>> uang;
    
    jumlah_mie = uang/2500;
    bonus_ganjil = jumlah_mie/3;
    bonus_genap = jumlah_mie/4;
	
	if(tanggal%2==1 && tanggal%5!=0 ){
		hasil = jumlah_mie+bonus_ganjil;
	}else if(tanggal%2==0 && tanggal%5!=0){
		hasil = jumlah_mie+bonus_genap;
	}else if(tanggal%5==0 && bonus_ganjil%2==0) {
		hasil_bonus = bonus_ganjil * 10;
		hasil = jumlah_mie + hasil_bonus;
	}else if (tanggal%5==0 && bonus_genap%2==0){
		hasil_bonus = bonus_ganjil * 10;
		hasil = jumlah_mie + hasil_bonus;
	}else if(tanggal%5==0 && bonus_ganjil%2!=0) {
		hasil_bonus = bonus_genap * 5;
		hasil = jumlah_mie + hasil_bonus;
	}else if (tanggal%5==0 && bonus_genap%2!=0){
		hasil_bonus = bonus_genap * 5;
		hasil = jumlah_mie + hasil_bonus;
	}
	
	cout<<hasil;

 return 0;	
}

