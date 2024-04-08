#include<iostream>
#include<conio.h>
using namespace std;
class distance{
    int me;
    int km;
    public :
    distance(){}
    distance(int a,int b){
       me=a;
       km=b;
    }  
    distance(const distance& t){
       me=t.me;
       km=t.km;
    }
    distance sum(distance c){
        distance result;
        result.me=me+c.me;
        // result.km=km+c.km;         
        if(result.me>999){
             result.km=km+c.km+(result.me/1000);
             return result;
        }
         result.km=km+c.km;
         return result;
    }
    void show(){
        cout<<"distane in meter is :="<<me<<endl;
        cout<<"distance in km is :="<<km<<endl;
    }
};
int main(){
//    distance d1; // Removed unnecessary parentheses  
    distance d1;
    distance d2(849,3);
    distance d3(475,4);
    distance d4(d2);
    return 0;
}