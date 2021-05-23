#include <iostream>
#include <iostream>

using namespace std;

string n;
int size, nilai;

cout<<"soal n / 2 = 4 "<<endl;
cout<<"Input Nilai = ";
cin>>n;
stringstream(n)>>nilai;

if(nilai >= 9)
	cout<<"Huruf Tak Boleh La!";
	return main();
	
	else if(n >= "a" && n <= "z"){
		cout<<"Huruf Tak Boleh la!";
		return main();
	}
	else{
		if(nilai / 2 == 4){
			cout<<"Betul"<<endl;
			cout<<endl;
			cout<<nilai<<" / 2 = 4 "<<endl;
		}
		else{
			cout<<"Tak Betul"<<endl;
			cout<<endl;
			return main();
		}
	}
