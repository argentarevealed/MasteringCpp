#include <iostream.h>
#include <conio.h>
void main () {
int a,b,c,i;
cout<<“program menghitung deret fibonaci”<<endl<<endl;
cout<<“masukan bilangan pertama=”;
cin>>a;
cout<<“masukan bilangan kedua=”;
cin>>b;
for (i=0; i<=10; i++){
c=a+b;
cout<<c<<endl;
a=b;
b=c;
}
getch ();
}


