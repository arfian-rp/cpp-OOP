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
	int x,y,z;
public:
	Balok() = default;
	void cetakVol(){cout<<x*y*z<<endl;}
	void setX(int n){x=n;}
	void setY(int n){y=n;}
	void setZ(int n){z=n;}
};
int main(int argc, char const *argv[])
{
	spasi();
	cout<<"ARRAY DARI OBJEK"<<endl;
	cout<<"membuat objek[2]"<<endl;
	Balok obj[2];
	obj[0].setX(3);
	obj[0].setY(6);
	obj[0].setZ(9);
	obj[1].setX(32);
	obj[1].setY(62);
	obj[1].setZ(93);
	cout<<"vol obj[0] = ";
	obj[0].cetakVol();
	cout<<"vol obj[1] = ";
	obj[1].cetakVol();
	spasi();
	cin.get();
	return 0;
}
