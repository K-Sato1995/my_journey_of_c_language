#include <stdio.h>

int main(void){
  struct person {
    char name[10];
    char sex;
    int age;
  };

  struct person ken = {"Ken", 'M', 10};

  printf("My name is %s. I'm %d.\n", ken.name, ken.age);
}
