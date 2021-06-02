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

struct Persegi
{
private:
	int s;
public:
	Persegi(int n){
		this->s = n;
	}
	int getL(){
		return s*s;
	}
	
};
int main(int argc, char const *argv[])
{
	spasi();
	cout<<"struct == class"<<endl;
	Persegi *obj;
	obj = new Persegi(25);
	cout<<obj->getL()<<endl;
	spasi();
	cin.get();
	return 0;
}