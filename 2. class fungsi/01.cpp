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

	double vol(){
		return panjang*lebar*tinggi;
	}
};

int main(int argc, char const *argv[])
{
	Balok *obj1;

	obj1 = new Balok();
	obj1->panjang=5.0;
	obj1->lebar=3.0;
	obj1->tinggi=2.0;
	spasi();
	cout<<"CLASS FUNCTION"<<endl;
	spasi();
	cout<<"vol = "<<obj1->vol()<<endl;
	spasi();
	cin.get();
	return 0;
}