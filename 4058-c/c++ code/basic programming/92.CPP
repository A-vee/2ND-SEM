#include<iostream>
using namespace std;
int main(){
int a,an=0,nc=0;
cout<<"Enter the amount :  ";
cin>>a;
while(a!=an){
    if(an+2000<=a){
        an+=2000;
        nc++;
    }
    else if(an+500<=a){
        an+=500;
        nc++;
    }
    else if(an+200<=a){
        an+=200;
        nc++;
    }
    else if(an+100<=a){
        an+=100;
        nc++;
    }
    else if(an+50<=a){
        an+=50;
        nc++;
    }
     else if(an+20<=a){
        an+=20;
        nc++;
    } 
    else if(an+10<=a){
        an+=10;
        nc++;
    }
    else if(an+5<=a){
        an+=5;
        nc++;
    }
    else if(an+2<=a){
        an+=2;
        nc++;
    }
    else{
        an++;
        nc++;
    }
}
cout<<"Total no. of notes for this amount : "<<nc;
return 0;}