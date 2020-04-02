//TODO: implementar função solucao_ex2 aqui
long solucao_ex2(long *rdi, long rsi, long *rdx){
   long rax = *rdx;
   if(*rdi > *rdx){
      rsi = 3*rsi;
   }else{
      *rdx += 1;
   }
   *rdi = rsi + *rdx;
   return rax;
}

