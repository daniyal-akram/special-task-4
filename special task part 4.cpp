#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int num,square,cube;
	cout<<"entre a number=";
	cin>>num;
	if(num<=10){
	square=num*num;
	cout<<"The square of number :"<<square;
    }else if(num>10){
	cube=num*num*num;
    cout<<"The cube of number :"<<cube;
	}
	
}
