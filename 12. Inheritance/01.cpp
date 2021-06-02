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
class Console{
public:
	Console(){
		cout<<"obj dibuat //Induk"<<endl;
	}
	~Console(){
		cout<<"obj dihapus //Induk"<<endl;
	}
	void print(string s){
		cout<<s;
	}
	void print(int s){
		cout<<s;
	}
	void print(double s){
		cout<<s;
	} 
	void print(char s){
		cout<<s;
	}
};

class newConsole:public Console{
public:
	newConsole(){
		cout<<"obj dibuat //anak"<<endl;
	}
	~newConsole(){
		cout<<"obj dihapus //anak"<<endl;
	}
	void println(string s){
		cout<<s<<endl;
	}
	void println(int s){
		cout<<s<<endl;
	}
	void println(double s){
		cout<<s<<endl;
	} 
	void println(char s){
		cout<<s<<endl;
	}
};

class induk{
private:
	int a;
public:
	induk(int n){
		this->a=n;
	}
	int getA(){
		return a;
	}
};
class anak : public induk{
private:
	int b;
public:
	//kons anak dengan 2 param
	anak(int a, int b) : induk(a){
		this->b=b;
	}
	int getB(){
		return b;
	}
};

class A{
private:
	int a;
public:
	A(int aa){
		a=aa;
	}
	virtual int get(){
		return this->a;
	}
};
class AB: public A{
private:
	int a,b;
public:
	AB(int a, int b, int aa):A(aa){
		this->a=a;
		this->b=b;
	}
	int get(){
		return this->a+this->b;
	}
};

class X
{
private:
	int x;
public:
	X(int n){
		x=n;
	}
	int getX(){
		return x;
	}
	
};
class Y
{
private:
	int y;
public:
	Y(int n){
		y=n;
	}
	int getY(){
		return y;
	}
	
};

class turunan:
public X, public Y
{
public:
	turunan(int x, int y) : X(x), Y(y){}
	
};

int main(int argc, char const *argv[])
{
	spasi();
	cout<<"INHERITANCE"<<endl;
	newConsole *obj;
	obj = new newConsole();
	cout<<"konstruktor induk dulu yg di panggil"<<endl;
	obj->print("SIMPLE INHERITANCE\n");
	obj->println("Hello World");
	cout<<"menghapus obj"<<endl;
	delete obj;
	cout<<"destructor anak dulu yg di panggil"<<endl;
	spasi();
	cout<<"MELEWATKAN PARAM KE KONS CLASS INDUK"<<endl;
	anak *obj2;
	obj2 = new anak(23,45);
	cout<<obj2->getA()<<endl;
	cout<<obj2->getB()<<endl;
	delete obj2;
	spasi();
	cout<<"VIRTUAL FUNC OVERRIDING"<<endl;
	AB *obj3;
	obj3 = new AB(2,4,6);
	cout<<obj3->get()<<endl;
	spasi();
	cout<<"MULTIPLE INHERITANCE"<<endl;
	turunan *obj4;
	obj4 = new turunan(1,2);
	cout<<"x = "<<obj4->getX()<<endl;
	cout<<"y = "<<obj4->getY()<<endl;
	spasi();
	cout<<"FINAL FUNC dan CLASS"<<endl;
	cout<<"FUNC"<<endl;
	cout<<"virtual void F() final{}"<<endl;
	cout<<"agar fungsi tdk bisa di modifikasi oleh klas turunan"<<endl;
	cout<<"CLASS"<<endl;
	cout<<"class CLASSINDUK{};"<<endl<<"class CLASSTURUNAN final {};"<<endl;
	cout<<"agar class tdk bisa di turunkan lagi"<<endl;
	spasi();
	cin.get();
	return 0;
}