// TODO: substituir tipo pelo tipo das globais
extern int var1, var2;

// TODO: implementar solucao_ex3 abaixo
void solucao_ex3(int *rdi){
   *rdi = 5*var1 + 10*var2;
   var2 = var1;
   }
