lista1 = [5,3,1,4,3]
lista = [2,4,1,5,6]
resulatdo = []
i = 0
j = 0

lista.sort()
lista1.sort()

while i < len(lista) and  j < len(lista1):
    if lista1[j] < lista[i]:
        resulatdo.append(lista1[j])
        j +=1
    elif lista1[j] > lista[i]:
        resulatdo.append(lista[i])
        i += 1
    elif lista[i] == lista1[j]:
        resulatdo.append(lista[i])
        resulatdo.append(lista1[j])
        j += 1
        i += 1
    
resulatdo.extend(lista1[j:])
resulatdo.extend(lista[i:])

print(resulatdo)