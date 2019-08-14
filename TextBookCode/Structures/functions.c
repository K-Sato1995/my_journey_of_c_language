#include<stdio.h>

typedef struct {
  int age;
  char name[50];
}USER;

USER getInfo(USER data);

int main(void) {
  USER user1 = { 25, "John" };
  getInfo(user1); //=> My name is John and I'm 25 years old 
}

USER getInfo(USER data){
  printf("My name is %s and I'm %d years old\n", data.name, data.age);
}
