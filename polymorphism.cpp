#include<iostream>
int add(int a,int b){
	return a+b;
}
int add(int a,float d){
	return a+d;
}
int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	add(2,3);
	add(2,3.4);
	add(3,4,5);
	return 0;
}
