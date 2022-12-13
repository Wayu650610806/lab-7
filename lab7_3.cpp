#include<iostream>

using namespace std;
int adiff(int a,int b){
  int c;
  if(a>0){
    a=(a+360)%360;
  }else{
    a=(a-360)%360;
    a=360+a;
  }
  if(b>0){
    b=(b+360)%360;
  }else{
    b=(b-360)%360;
    b=360+b;
  }
  if(a>b){
    c=a-b;
  }
  if(a<b){
    c=b-a;
  }
  if(a==b){
    c=0;
  }
  if(c>180){
    c=c-360;
  }
  if(c<0){
    c=-c;
  }
  
  return c;
}


int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244)<<"\n";
}
