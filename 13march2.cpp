#include<iostream>
using namespace std;

class midterm{
    protected:
    int a;
    int b;
    int c;
    int d;
    public:
    void showmidterm(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        d=a+b+c;
        cout<<"the total of midterm is"<<endl<<a+b+c<<endl;
  }
};
class termEnd{
    protected:
    int a;
    int b;
    int c;
    int e;
    public:
    void showtermEnd(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        e=a+b+c;
        cout<<"the total of termEnd is"<<endl<<a+b+c<<endl;  
    }
};
class result:public midterm,public termEnd{
    int f;
    public:
    void showresult(int x){
       f=x;
    cout<<"the total of result is"<<endl<<d+e<<endl;
    }
};
int main(){
    result *k=new result();
    k->showmidterm(29,25,30);
    k->showtermEnd(66,70,68);
    k->showresult(0);
}