#include<iostream>

using namespace std;

int main(){
	int data[] = {8, 1, 15, 10, 7, 30, 90, 100, 35, 50};
	int lenght = sizeof(data)/sizeof(*data);
	int temp;
	int cari;
	char pilih;
	
	cout<<endl<<endl;
	cout<<"Data List"<<endl;
	for(int i=0; i<lenght; i++){
		cout<<data[i]<<"	";
	}
	cout<<endl;
	cout<<"1.Pengurutan Dari Besar Ke Kecil"<<endl;
	cout<<"2.Pencarian Index"<<endl<<endl;
	cout<<"Massukkan Pilihan :"; cin>>pilih;
	cout<<endl;
	
	switch(pilih){
		case '1' :{
			cout<<"Pengurutan Dari Besar Ke Kecil"<<endl<<endl;
			for(int a=1; a<lenght; a++){
				for(int b=0; b<lenght-a; b++){
					if(data[b] < data [b+1]){
						temp = data[b];
						data[b] = data [b+1];
						data[b+1] = temp;
						
					}
				}
			} 
			for(int x=0; x<lenght; x++){
				cout<<data[x]<<"";
			}
			break;
		}
		case '2' : {
		cout<<"Cari Nilai = "; cin>>cari;
		cout<<endl;
		for(int idx=0; idx<lenght; idx++){
			if(cari == data[idx]){
				cout<<"Nilai"<<cari<<" berada di index "<<idx;
				cout<<endl<<endl;
			}
		}
		break;
	}
	}
	

}
