#include <stdio.h>

int main() {
	char *archivo = "output.txt";

	FILE *fp = fopen(archivo, "w");
	if(fp == NULL){
	printf("Error al abrir el archivo %s", archivo);
	return -1;
	}
	
	fprintf(fp, "Hello, World!");

	fclose(fp);

	return 0;
}
