#include <iostream>
#include <cmath>

using namespace std;

//Write prototype of  sg() here.
template <typename T>
T sg(T ,T );

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

//Write function definition of  sg() here.
template <typename T>
T sg(T x,T y){
	T a,b,c;
	a=max(x,y);
	b=min(x,y);
	c=x*y;
	if(x<=0 || y<=0 ){
 		return 0;
	}else if(a/b <=10){
		return pow(c,0.5);
	}else{
		return sg(x,y)=sg(x,pow(c,0.5))+sg(y,pow(c,0.5));
	}
}