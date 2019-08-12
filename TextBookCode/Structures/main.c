#include<stdio.h>

struct Person {
  int age;
  char *name;
};

int main(void) {
  struct Person ken = { 35, "Ken" };

  printf("My name is %s, I'm %d years old.\n", ken.name, ken.age); //=> My name is Ken, I'm 35 years old.
}
