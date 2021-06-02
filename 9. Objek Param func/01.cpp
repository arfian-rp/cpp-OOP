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
class Persegi
{
private:
	int s;
public:
	Persegi(int n){
		s = n;
	}
	int getS(){
		return s;
	}
	int getL(){
		return s*s;
	}
	friend void memperbesar(Persegi& obj);
};
void memperbesar(Persegi& obj){
	obj.s++;
}

int main(int argc, char const *argv[])
{
	spasi();
	cout<<"membuat obj"<<endl;
	Persegi obj1(23);
	cout<<"S = "<<obj1.getS()<<endl;
	cout<<"L = "<<obj1.getL()<<endl;
	cout<<"persegi diperbesar"<<endl;
	memperbesar(obj1);
	cout<<"S = "<<obj1.getS()<<endl;
	cout<<"L = "<<obj1.getL()<<endl;
	spasi();
	cin.get();
	return 0;
}