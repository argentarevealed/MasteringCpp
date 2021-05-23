#include <iostream>
using namespace std;

char NAMA[20],MataKuliah[20],INDEKS;
int NPM,NILAI;

int main(){

//cek ondisi
cout<<"NAMA MAHASISWA   =";
cin>>NAMA;
cout<<"NPM              =";
cin>>NPM;
cout<<"MASUKAN NILAI    =";
cin>>NILAI;
cout<<"MATA KULIAH      =";
cin>>MataKuliah;

if(NILAI>=76 && NILAI<=100)
{INDEKS='A';
}
else if(NILAI>=66 && NILAI<=75)
{INDEKS='B';
}
else if(NILAI>=56 && NILAI<=65)
{INDEKS='C';
}
else if(NILAI>=46 && NILAI<=55)
{INDEKS='D';
}
else if(NILAI>=0 && NILAI<=45)
{INDEKS='E';
}
cout<<"mahasiswa dengan nama "<<NAMA<<"dengan npm "<<NPM<<"pada mata kuliah "<<MataKuliah<<"memiliki nilai mutu = "<<INDEKS;

return 0;

}

