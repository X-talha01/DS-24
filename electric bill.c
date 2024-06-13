//program for electricity bill
// pr=preious reading cr=current reading 
//r=rate per unit uc=unit consumed pa=pay bill amount
#include<stdio.h>
int main(){
 int pr,cr,r,uc,pa;
 printf("\t enter pr-:");
 scanf("%d" ,&pr);
  printf("\t enter cr-:");
 scanf("%d" ,&cr);
  printf("\t enter r-:");
 scanf("%d" ,&r);
 uc=cr-pr;
 pa=uc*r;
 printf(" unit consumed %d",uc);
  printf("pay bill amount %d",pa);
  return 0;
}
