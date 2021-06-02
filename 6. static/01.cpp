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

class AnggotaKelasStatik{
private:
	int a,b,c;
public:
	static int jumlahObjk; //atribut static
	static int getJumlahObjk(){ //fungsi static
		return jumlahObjk;
	}
	AnggotaKelasStatik(int a, int b, int c){
		this->a=a;
		this->b=b;
		this->c=c;
		jumlahObjk++;
	}
	~AnggotaKelasStatik(){
		jumlahObjk--;
	}
	void cetakABC(){
		cout<<this->a<<" "<<this->b<<" "<<this->c;
	}

};
int AnggotaKelasStatik::jumlahObjk {0};


int main(int argc, char const *argv[])
{
	cout<<"ATTRIBUT STATIC"<<endl;
	AnggotaKelasStatik *ob1;
	AnggotaKelasStatik *ob2;
	cout<<"membuat ob1"<<endl;
	ob1 = new AnggotaKelasStatik(1,2,3);
	cout<<"membuat ob2"<<endl;
	ob2 = new AnggotaKelasStatik(3,6,9);
	cout<<"ob1 = ";
	ob1->cetakABC();
	cout<<endl<<"ob2 = ";
	ob2->cetakABC();
	cout<<endl<<"jumlahObjk = "<<AnggotaKelasStatik::jumlahObjk<<endl;
	spasi();
	cout<<"FUNGSI STATIC"<<endl;
	cout<<"jumlah obj = "<<AnggotaKelasStatik::getJumlahObjk()<<endl;
	cout<<"menghapus salah satu objk"<<endl;
	delete ob2;
	cout<<"jumlah obj = "<<AnggotaKelasStatik::getJumlahObjk()<<endl;

	cin.get();
	return 0;
}