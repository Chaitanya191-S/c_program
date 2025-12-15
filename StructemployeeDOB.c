#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};
struct employee{
    char name [20];
    float salary;
    struct date dob; 

};
int main(){

        struct employee e ={
                "chaitanya kejkar",
                90000,
                {19,01,2007}
        };


    printf("employee birth year:%d and employee name is %s and his salary is %2.f\n\n",e.dob.year,e.name,e.salary);

    return 0;


}