#include <iostream.h>
#include <conio.h>
int tambah (int a,int b) {
int x;
x=a+b;
return x;
}
int kali (int a,int b){
int y;
for (int i=1; i<=b; i++) {
y=y+a;
}
return y;
}
void main (){
int a,b,x,y;
cout<<�nilai a : �;
cin>>a;
cout<<�nilai b : �;
cin>>b;
x=tambah(a,b);
cout<<�hasil tambah : �<<x<<endl;
y=kali(a,b);
cout<<�hasil kali : �<<y<<endl;
>getch ();
}
