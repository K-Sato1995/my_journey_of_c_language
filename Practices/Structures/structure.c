#include <stdio.h>

// Declaring a struct
typedef struct grade {
  int number;
  char *name;
  double ave;
  char grade;
}GRADE;

int main(void){
  struct person {
    char name[10];
    char sex;
    int age;
  };
  struct person ken = {"Ken", 'M', 10};
  printf("My name is %s. I'm %d.\n", ken.name, ken.age); //=> My name is Ken. I'm 10.


  GRADE data1 = {1001, "James Lee", 77.3, 'B'};
  printf("%d %s %f %c \n", data1.number, data1.name, data1.ave, data1.grade); //=> 1001 James Lee 77.300000 B
}
