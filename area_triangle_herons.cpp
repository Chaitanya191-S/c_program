#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a = 3, b = 4, c = 5;
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of the triangle is: " << area << endl;
    return 0;
}