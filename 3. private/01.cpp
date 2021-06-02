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
private:
	double panjang;
	double lebar;
	double tinggi;

	double vol(){
		return panjang*lebar*tinggi;
	}

public:
	void setPanjang(double n){
		panjang=n;
	}
	void setLebar(double n){
		lebar=n;
	}
	void setTinggi(double n){
		tinggi=n;
	}
	double getPanjang(){
		return panjang;
	}
	double getLebar(){
		return lebar;
	}
	double getTinggi(){
		return tinggi;
	}
	double getVolume(){
		return vol();
	}
};

int main(int argc, char const *argv[])
{
	Balok *obj1;

	obj1 = new Balok();
	obj1->setPanjang(5.0);
	obj1->setLebar(3.0);
	obj1->setTinggi(2.0);
	spasi();
	cout<<"KEY private"<<endl;
	spasi();
	cout<<"vol = "<<obj1->getVolume()<<endl;
	spasi();
	cin.get();
	return 0;
}