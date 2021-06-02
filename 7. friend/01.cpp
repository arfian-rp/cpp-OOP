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
class Contoh{
private:
	int x;
public:
	friend void setNilai(Contoh& obj, int nilai);
	friend int getNilai(Contoh& obj);
};
void setNilai(Contoh& obj, int nilai){
	obj.x = nilai;
}
int getNilai(Contoh& obj){
	return obj.x;
}

class Pertama{
private:
	int x;
public:
	Pertama(int x){
		this->x=x;
	}
	friend class Kedua;
};

class Kedua{
public:
	void setNilaiX(Pertama& obj, int nilai){
		obj.x = nilai;
	}
	int getNilaiX(Pertama& obj){
		return obj.x;
	}
};

int main(int argc, char const *argv[])
{
	spasi();
	cout<<"FRIEND FUNC"<<endl;
	Contoh obj;
	setNilai(obj,87);
	cout<<getNilai(obj)<<endl;
	spasi();
	cout<<"FRIEND CLASS"<<endl;
	cout<<"membuat obj kls Pertama"<<endl;
	Pertama obj1(20);
	cout<<"membuat obj kls kedua"<<endl;
	Kedua obj2;
	obj2.setNilaiX(obj1,40);
	cout<<obj2.getNilaiX(obj1)<<endl;
	cin.get();
	return 0;
}
