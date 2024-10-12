#include <iostream>
using namespace std;
int main(){

	double X,Y;
	cin >> X >> Y;
	if(X==0 && Y==0){
		cout << "Origem" << "\n";
	}
	else if(Y==0){
		cout << "Eixo X" << "\n";
	}
	else if(X==0){
		cout << "Eixo Y" << "\n";
	}
	// X = positive y = positive 
	else if(X>0 && Y>0){
		cout << "Q1";
	}
	//x=negative y = positive 
	else if(X<0 && Y>0){
		cout << "Q2";
	}
	// x = negative y = negative
	else if(X<0 && Y<0){
		cout << "Q3";
	}
	//x = positive y = negative
	else if(X>0 && Y<0){
		cout << "Q4";
	}
	return 0;
}