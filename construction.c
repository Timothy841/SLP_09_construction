#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct foo {char *c; int i;};

void print_stat(struct foo *f);
struct foo * make_foo(char *s, int a);

int main(){
  struct foo *wood = make_foo("oak", 30);
  srand(time(NULL));
  struct foo *random = make_foo("random", rand());
  print_stat(wood);
  print_stat(random);
}

void print_stat(struct foo *f){
  printf("wood:%s\t time in years to grow:%d\n", f->c, f->i);
}

struct foo * make_foo(char *s, int a){
  struct foo *n = malloc(sizeof(struct foo));
  n->c = s;
  n->i = a;
  return n;
}
