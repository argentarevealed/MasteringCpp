#include <iostream>
using namespace std;
   
   int main(){
   	
   	int bil;
   	
   	cout<<"Menampilkan Deret Bilangan Genap dan Ganjil "<<endl;
   	cout<<"============================================"<<endl;
   	cout<<"Silahkan Input Angka :"<<endl;
   	cin>>bil;
   	
	for (int i=1; i<=bil; i++ ) {
			if (i % 2!=0) {
				cout<<"Ganjil " << i<<endl;
			}
			else if (i % 2==0 ) {
				cout<<"Genap  " << i<<endl;
			}
			else{
				cout<<"error";
		}
	}	
}
