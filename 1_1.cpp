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
		Obj operator<(Obj num){
			Obj temp;
			temp.x=this->x<num.x;
			temp.y=this->y<num.y;
			return temp;
		}
		
};
int main(){
    Obj o1,o2;
    o1.SetData(5,3);
    o1.GetData();
    o2=o1.operator<(o1);
    return 0;
}
