#include <stdio.h>

#define LENGTH 100

struct student
{
    char    name[100];
    int     age;
    double  weight;
};

int main(void) {
    struct student mike = {
        "Mike", 20, 70.45
    };
    
    struct student john = {
        "John", 30, 83.21
    };
    

    printf("Name:%s Age:%d Weight:%.2lf\n", mike.name, mike.age, mike.weight);
    printf("Name:%s Age:%d Weight:%.2lf\n", john.name, john.age, john.weight);

    return 0;
}
