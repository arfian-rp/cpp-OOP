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
class Persegi{
private:
	int s;
public:
	Persegi() = default;
	Persegi(int n){this->s = n;}
	int getS(){return s;}
	int getL(){return s*s;}
	Persegi perbesar(){Persegi obj; obj.s=s+1;return obj;}
};
int main(int argc, char const *argv[])
{
	spasi();
	cout<<"OBJ SEBAGAI HASIL"<<endl;
	Persegi obj1(8);
	Persegi obj2;
	cout<<"obj1 = "<<obj1.getS()<<endl<<"L = "<<obj1.getL()<<endl;
	cout<<"obj2 = diperbesar dari obj1"<<endl;
	obj2 = obj1.perbesar();
	cout<<"obj2 = "<<obj2.getS()<<endl<<"L = "<<obj2.getL()<<endl;
	spasi();
	cin.get();
	return 0;
}
