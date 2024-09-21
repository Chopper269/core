#include <stdio.h>
#include <string.h>

size_t strlcat(char *dest, const char *ori, size_t tam) {
    size_t dest_tam = strlen(dest); //calcula lo que ocupa dest y lo guarda
    size_t ori_tam = strlen(ori); //calcula lo que ocupa ori y lo guarda
    
    if (dest_tam >= tam) { //comprueba si el tamaño del buffer es suficiente para lo que queremos grabar
        return tam + ori_tam; // devuelve el tamaño que seria necesario en dest para poder copiar ori a dest ya que es insuficiente
    }
    
    size_t copiar = tam - dest_tam - 1; // creamos una variable con el espacio disponible -1 para el nulo
    if (copiar > ori_tam) {// si el tamaño de copiar es mayor que el de origen, significa que hay espacio para copiar + el nulo
        copiar = ori_tam; // reasignamos el valor para que copie los mismos char que hay en ori
    }

    strncat(dest, ori, copiar); //esta funcion realiza la concatenacion de ori a dest, del numero de caracteres que diga copiar
    return dest_tam + ori_tam; //devuelve el tamaño de el origen y el destino
}


int main() {
    char dest[40] = "pakekieresaveeso";
    char ori[] = "jajasalu2xdxd";
    
    size_t longitud = strlcat(dest, ori, sizeof(dest)); //declaramos la variable longitud para que nos de la suma de tamaños ori+dest, y ejecutamos la funcion
    
    printf("concatenacion: %s\n", dest); //nos muestra la concatenacion de ori y dest
    printf("Longitud total: %zu\n", longitud); //nos da la longitud total de ori y dest
    
    return 0;
}
