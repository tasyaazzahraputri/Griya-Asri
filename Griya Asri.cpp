#include <iostream>
#include <cstdio>
using namespace std;

int main (){
	int q;
	cout<<"Jumlah Rumah Griya Asri: ";
	cin>>q;
	cin.ignore(512,'\n');
	
	string r[q];
	string s[q];
	string t[q];
	string u[q]; 
	
	if(q%2==0){
		for (int i=0; i<q; i++){
			printf("Masukan Nama Pemilik Rumah: ");
			getline (cin,r[i]);
			
			printf("Masukan Alamat Pemilik: ");
			getline (cin,s[i]);
		}
	}else{
		for (int i=0; i<q; i++){
			printf("Masukan Nama Pemilik Rumah: ");
			getline (cin,r[i]);
			
			printf("Masukan Alamat Pemilik: ");
			getline (cin,s[i]);	
		}	
	}
	for(int i=0; i<1; i++){
		printf("Masukan Nama Pemilik yang ingin dicek: ");
		getline (cin,t[i]);
		printf("Masukan Alamat yang ingin dicek: ");
		getline (cin,u[i]);
		
	}
	if(q%2==0){
		if (t[0]==r[0] && u[0]==s[0] || t[0]==r[1] && u[0]== s[1] ){
			printf("Rumah ditemukan");
	}
		else {
		printf("Rumah Tidak ditemukan");
	}
}
	else if (q%2!=0){
		if (t[0]==r[0] && u[0]==s[0] || t[0]==r[1] && u[0]== s[1] || t[0]==r[2] && u[0]==s[2]){
		printf("Rumah ditemukan ");
	}else {
		printf("Rumah tidak ditemukan");
	}
	
	}
	
	
	return 0;
}
