#include <iostream>
#include <fstream>
#include <iostream>
using namespace std; 
char nama [20];
char nim [20];
int jumlah;
char dosen [20];
char mk [20];
int jum;
cout<<"masukan jumlah mahasiswa : ";
cin>>jumlah;
cout<<"masukan jumlah DOSEN :";
cin>>jum;
ofstream save;
save.open ("mahasiswa.txt", ios::app);
for (int i=1; i<=jumlah; i++){
cout<<"Nama :";
cin>>nama;
save<<"NAMA :"<<nama<<endl;
cout<<"Nim :";
cin>>nim;
save<<"NIM :"<<nim<<endl;
}
save.close();
save.open ("dosen.txt", ios::app);
for (int i=1; i<=jum; i++){
cout<<"NAMA DOSEN :";
cin>>dosen;
save<<"NAMA DOSEN :"<<dosen<<endl;
cout<<"MK :";
cin>>mk;
save<<"MK :"<<mk<<endl;
}
save.close();
}
