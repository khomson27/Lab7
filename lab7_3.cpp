#include<iostream>
#
double adiff(double a,double b){
  int c;
  if(a<0){
    while(a <= -360){
       a += 360;
    }
    a = 360+a;
  }else{
    while(a>=360){
      a -= 360;
    }
  }
  if(b<0){
    while(b <= -360){
       b += 360;
    }
    b = 360+b;
  }else{
    while(b>=360){
      b -= 360;
    }
  }
  c = a-b;
  if(c<0){
    c *= -1;
  }if(c >= 180){
    c = 360-c;
  }
  return c;
}
using namespace std;


int main(){
  //  cout << adiff(730,270); //90
  cout << adiff(180,270) << endl; //90
  cout << adiff(210,45)<< endl; //165
  cout << adiff(0,360)<< endl; //0
  cout << adiff(10,350)<< endl; // 20
  cout << adiff(95,260)<< endl; //165
  cout << adiff(90,-90)<< endl; //180
  cout << adiff(1000,280)<< endl; //0
  cout << adiff(60,244)<< endl; //176
}
