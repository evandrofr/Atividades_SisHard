#include <stdio.h> 
 int ex5_solucao(){
    int a = 1;
    int ebx = 0;
    int eax;
    while(a > 0){
      eax = 0;
      scanf("%d",&a);
      eax = a;
      if(eax > 0){
         ebx+= eax;
      }
    }
    eax = ebx;
    return eax;
 }

