#include <conio.h>
#include <iostream.h>
void main(){
int A[2][2], B[2][2], C[2][2];
cout<<“Masukan Matriks A\n”<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<“A[“<<i<<“][“<<j<<“]: “;
cin>>A[i][j];
}
}
cout<<“\n\n”;
cout<<“Matriks\n”;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<” “<<A[i][j];
}
cout<<“\n”<<endl;
}
cout<<“matriks transpose “<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
B[j][i]=A[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<” “<<B[i][j];
}
cout<<“\n”<<endl;
}
cout<<“jumlah A + B : “<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
C[i][j]=B[i][j]+A[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<” “<<C[i][j];
}
cout<<“\n”<<endl;
}
getch();
}
