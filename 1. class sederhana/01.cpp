#include <iostream>
using namespace std;

void spasi(){
	cout<<endl;
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
}

class Balok{
public:
	double panjang;
	double lebar;
	double tinggi;
};

int main(int argc, char const *argv[])
{
	Balok *obj1;

	obj1 = new Balok();
	obj1->panjang=5.0;
	obj1->lebar=3.0;
	obj1->tinggi=2.0;
	
	Balok *obj2;

	obj2 = new Balok();
	obj2->panjang=15.0;
	obj2->lebar=13.0;
	obj2->tinggi=12.0;
	spasi();
	cout<<"CONTOH CLASS SEDERHANA"<<endl;
	spasi();
	cout<<"panjang ob1 = "<<obj1->panjang<<endl;
	cout<<"lebar obj1 = "<<obj1->lebar<<endl;
	cout<<"tinggi obj1 = "<<obj1->tinggi<<endl;
	cout<<"Vol obj1 = "<<obj1->panjang*obj1->lebar*obj1->tinggi<<endl;
	spasi();
	cout<<"panjang obj2 = "<<obj2->panjang<<endl;
	cout<<"lebar obj2 = "<<obj2->lebar<<endl;
	cout<<"tinggi obj2 = "<<obj2->tinggi<<endl;
	cout<<"Vol obj2 = "<<obj2->panjang*obj2->lebar*obj2->tinggi<<endl;
	spasi();
	
	cin.get();
	return 0;
}