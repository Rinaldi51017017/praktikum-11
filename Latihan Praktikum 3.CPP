#include <iostream.h>
#include <conio.h>
int main ()
{
struct segitiga
{
float keliling;
float luas;
};
segitiga alas, tinggi, miring, x;
cout<<"---------------------------------------------------"<<endl;
cout<<"        mengitung luas dan keliling segitga        "<<endl;
cout<<"---------------------------------------------------"<<endl;
cout<<"\t ===           ananda putri syaviri        ===\n\n";
cout<<"\t ===             130533608243              ===\n\n";
cout<<"\t ===             ptt'13 off b              ===\n\n";
cout<<"\t ===-------------------**------------------===\n\n";
cout<<"keterangan : "<<endl;
cout<<" a = sisi alas segitiga  "<<endl;
cout<<" b = sisi tinggi segitiga "<<endl;
cout<<" c = sisi miring segitiga "<<endl;
cout<<" a = ";
cin>>alas.luas;
cout<<" b = ";
cin>>miring.luas;
cout<<endl;
x.luas=(alas.luas*tinggi.luas)/2;
x.keliling=alas.luas+tinggi.luas+miring.luas;
cout<<"luas segitiga = "<<x.luas<<" cm "<<endl;
cout<<"keliling segitiga = "<<x. keliling<<" cm "<<endl<<endl;
getch();
}