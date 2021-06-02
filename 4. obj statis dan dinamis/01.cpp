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
	int panjang;
	int lebar;
	int tinggi;
	int vol(){
		return panjang*tinggi*lebar;
	}
};

int main(int argc, char const *argv[])
{
	spasi();
	cout<<"OBJEK STATIS DAN DINAMIS"<<endl;
	spasi();
	cout<<"NAMAKELAS NAMAOBJKSTATIS;"<<endl;
	Balok objstatis; //cara statis
	objstatis.panjang=8;
	objstatis.lebar=4;
	objstatis.tinggi=4;
	cout<<objstatis.vol()<<endl;
	spasi();
	cout<<"NAMAKELAS *NAMAOBJKDINAMIS = new NAMAKELAS();"<<endl;
	Balok *objdinamis = new Balok();
	objdinamis->panjang = 6;
	objdinamis->lebar = 5;
	objdinamis->tinggi = 12;
	cout<<objdinamis->vol()<<endl;
	cout<<"kelebihan pakai dinamis objk dapat dihapus jika tidak diperlukan"<<endl;
	delete objdinamis;
	cout<<objdinamis->vol()<<" //obj telah dihapus"<<endl;
	cin.get();
	return 0;
}