#include<iostream>
using namespace std;
class Obj{
	public:
		int x;
		int y;
		void SetData(int x,int y){
			this->x=x;
			this->y=y;
		}
		void GetData(){
			cout<<" X = "<<x<<endl;
			cout<<" Y = "<<y<<endl;
		}
		Obj operator+(Obj num){
			Obj temp;
			
			temp.x=this->x+num.x;
			temp.y=this->y+num.y;
			return temp;
		}
		Obj operator-(Obj num){
			Obj temp;
			
			temp.x=this->x-num.x;
			temp.y=this->y-num.y;
			return temp;
		}
		Obj operator*(Obj num){
			Obj temp;
	
			temp.x=this->x*num.x;
			temp.y=this->y*num.y;
			return temp;
		}
};
int main(){
	int a,b;
	cout<<"Enter A1 : ";
	cin>>a;
	cout<<"Enter B1 : ";
	cin>>b;
	int a2,b2;
	Obj o1,o2,o3,o4,o5;
	o1.SetData(a,b);
	cout<<"Enter A2 : ";
	cin>>a2;
	cout<<"Enter B2 : ";
	cin>>b2;
	o2.SetData(a2,b2);
	o3=o1+o2;
	o4=o1-o2;
	o5=o1*o2;
	cout<<"Addition : "<<endl;
	o3.GetData();
	cout<<"Subtraction : "<<endl;
	o4.GetData();
	cout<<"Multiplication : "<<endl;
	o5.GetData();
	return 0;
	
}
