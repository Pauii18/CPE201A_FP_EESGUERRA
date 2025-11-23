#include <iostream>
using namespace std;

void greetUser();
int perimComp(int length, int width); //perimeter computation

int main (){
	greetUser();
    
    int length, width, result;
    
    cout << "Please input a Length: " ;
    cin >> length;
    
    cout << "Please input a Width: " ;
    cin >> width;
    
    result = perimComp (length, width);
    
    cout << "The Perimeter is: " ;
    cout<<result<<endl;
}

void greetUser(){
	cout<< "Hello, Welcome to the Perimeter Computation!!" <<endl;
}


int perimComp (int length, int width) {
	int perimeter = 2 * (length + width);
	return perimeter;
}
