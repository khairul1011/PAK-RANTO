#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std ;
int main(){
	char nama[50],grade,nis[50];
	int n_tugas, n_uts, n_uas;
	float n_akhir;
	
	
	cout<<endl;
	cout<<"Assalamualaikum /Selamat Pagi"<<endl<<endl;
	cout<<"\t--------------PROGRAM MENGHITUNG NILAI AKHIR ----------------"<<endl<<endl;
	cout<<"\tMasukkan Nama Siswa : ";
	gets(nama);
	cout<<"\tMasukkan NIS :";
	gets(nis);
	cout<<endl;
	cout<<"\tMassukkan Nilai Tugas :";
	cin>>n_tugas;
	cout<<"\tMassukkan Nilai UTS :";
	cin>>n_uts;
	cout<<"\tMasukkan Nilai UAS :";
	cin>>n_uas;
	cout<<endl;
	cout<<"\t-------------- HASIL NILAI SISWA ----------------"<<endl<<endl;
	
	n_akhir = (((n_tugas*30)/100)+((n_uts*35)/100)+((n_uas*35)/100));
	
	if(n_akhir >= 80){
		grade = 'A';
}	else if (n_akhir >=70) {
		grade = 'b';
} 	else if (n_akhir >=60) {
		grade = 'C';
}	else if (n_akhir >=50) {
		grade = 'D';
} 	else {
		grade = 'E';
}

	cout<<endl;
	cout<<"\tNilai Akhir Adalah, "<<grade;
	cout<<"\tGrade Yg Di Dapat "<<nama	<< "  adalah, "<<grade;
	return 0;
	
}
