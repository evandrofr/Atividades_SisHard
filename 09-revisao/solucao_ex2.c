/* Implementar função solucao_ex2 */

int solucao_ex2 (long a, long b){
   long rbx = a;
   if(2*b > a ){
      rbx += rbx;
   }
   rbx += 2*b;
   return rbx;
}
