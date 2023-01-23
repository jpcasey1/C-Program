#include <stdio.h>
#include <math.h>

int main() {
  pythag();
  canYouDrive();
  repeatHelloWorld();

  
}
int pythag() {
  int num1, num2, c;
  double result;
  printf("Enter two integers \n");
  scanf("%d %d", &num1, &num2);
  c = (num1 * num1) + (num2 * num2);
  result = sqrt(c);
  printf("%d squared + %d squared = %d \n", num1, num2, c);
  printf("The square root of C is %lf \n", result);
  
}
int canYouDrive(){
  int age;
  printf("How old are you? \n");
  scanf("%d", &age);
  if(age > 15) printf("You are old enough to get your drivers license.");
  else printf("You are not old enough to get your drivers license.");
}
int repeatHelloWorld(){
  int num;
  printf("\n How many times do you want me to say 'Hello World'? \n");
  scanf("%d", &num);
  int i = 0;
  while(i < num){
    printf("Hello World\n"); 
    i = i+1;}
}


