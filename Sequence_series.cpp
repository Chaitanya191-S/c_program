#include<iostream>
using namespace std;    

int main(){
    int i = 1;
    while(true){
        ++i;
        if((i%3) ==0){
        continue;
        }
        if (i == 50 ){
            break;
        }
        cout<<i<<" ";
        if((i%2) ==0)
        {
            i +=3;
        }
        else{
            i-=3;
        }
    }
        cout<<i<<endl;
        return 0;
}



// output:
//2 7 5 4 8 13 11 10 14 19 17 16 20 25 23 22 26 31 29 28 32 37 35 34 38 43 41 40 44 49 47 46 50  