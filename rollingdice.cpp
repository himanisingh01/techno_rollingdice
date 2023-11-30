#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
    int face1=0, face2=0, sum=0 ;
    cout<<"enter how many times you want to roll the dice ";
    int roll;
    cin>>roll;
    srand(time(NULL));
    while(roll-->0){
        face1=rand()% 6+1;
        cout<<"your first roll is"<<face1<<endl;
        face2=rand()% 6+1;
        cout<<"your second roll is"<<face2<<endl;
    

    sum= face1+face2;
    cout<<endl;
    }
        
        return 0;
}