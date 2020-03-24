
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int a){
    int b = 0;
    long c = 0;

    while (b < a){
        c += b;
        b += 1;
    }

    return c;
}
