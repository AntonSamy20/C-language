#include <stdio.h>


typedef struct {
    char grade;
    int id;
    short bonus;
}Employee;
typedef struct {
    char grade;
    int id;
    short bonus;
}__attribute__((packed)) Student;;

int main(){
    Employee e1;
    Student s1;
    printf("struture padding: %zu\n",sizeof(e1));
    printf("without padding:  %zu",sizeof(s1));
    
}
a.
person.name

b.
*person.name

c.
(*person).name

d.
person-&gt;name