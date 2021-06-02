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

class KELAS{
public:
	KELAS(){
		cout<<"objk baru dibuat, pesan dari konstruktor"<<endl;
	}

};

class KELASSTD{
public:
	KELASSTD()=default;
	KELASSTD(string s){
		cout<<s<<endl;
	}
};

class Kelas{
private:
	int xi;
public:
	Kelas(int ai){
		xi = ai;
	}
	int getX(){
		return xi;
	}
};

class PakaiThis{
private:
	int nilai;
public:
	PakaiThis(int nilai){
		this->nilai=nilai;
	}
	int getNilai(){
		return this->nilai;
	}
};

class PakaiDestructor{
public:
	PakaiDestructor(){
		cout<<"Objek Baru telah dibuat //dri const"<<endl;
	}
	~PakaiDestructor(){
		cout<<"Object telah di hapus //dri destruct"<<endl;
	}
};


int main(int argc, char const *argv[])
{
	spasi();
	cout<<"KONSTRUKTOR"<<endl;
	KELAS objk;
	spasi();
	cout<<"KONSTRUKTOR STANDART"<<endl;
	cout<<"membuat objk dengan konstruktor standart"<<endl;
	KELASSTD objk2;
	KELASSTD("membuat objk dengan konstruktor lain");
	spasi();
	cout<<"KONSTRUKTOR PARAMETER"<<endl;
	Kelas objk3(20);
	cout<<objk3.getX()<<endl;
	spasi();
	cout<<"PAKAI THIS"<<endl;
	PakaiThis objk4(80);
	cout<<objk4.getNilai()<<endl;
	spasi();
	cout<<"DESTRUCTOR"<<endl;
	PakaiDestructor *objk5;
	cout<<"membuat object..."<<endl;
	objk5 = new PakaiDestructor();
	cout<<"menghapus objek..."<<endl;
	delete objk5;
	spasi();
	
	cin.get();
	return 0;

}
