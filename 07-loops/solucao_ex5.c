
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */
long ex5_solucao(long rdi, long rsi){

    long r8d = 0;

    for (long rcx = 0; rcx < rdi; rcx++){
        if (rcx%rsi == 0){
            r8d += rcx;
        }
    } 
    return r8d;
}
