A useful technique is the ability to have pointers to functions. Their declarati
on is easy: write the declaration as it would be for the function, say

int func(int a, float b);
and simply put brackets around the name and a * in front of it: that declares th
e pointer. Because of precedence, if you don't parenthesize the name, you declar
e a function returning a pointer:

/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);
Once you've got the pointer, you can assign the address of the right sort of fun
ction just by using its name: like an array, a function name is turned into an a
ddress when it's used in an expression. You can call the function using one of t
wo forms:

(*func)(1,2);
/* or */
func(1,2);
The second form has been newly blessed by the Standard. Here's a simple example.

#include <stdio.h>
#include <stdlib.h>

void func(int);

main(){
      void (*fp)(int);

      fp = func;

      (*fp)(1);
      fp(2);

      exit(EXIT_SUCCESS);
}

void
func(int arg){
      printf("%d\n", arg);
}
Example 5.16