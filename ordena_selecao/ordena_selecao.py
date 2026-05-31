def busca_menor(array):
    menor = array[0]
    menor_indice = 0
    
    for i in range(1, len(array)):
        if array[i] < menor:
            menor = array[i];
            menor_indice = i;
    return menor_indice


def ordena_selecao(array):
    novoArray = []
    
    for i in range(len(array)):
        idx_do_menor = busca_menor(array)
        novoArray.append(array.pop(idx_do_menor))

    return novoArray


print(ordena_selecao([5, 3, 6, 2, 10]))