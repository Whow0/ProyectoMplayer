#include <stdio.h>
#include <stdlib.h>
//Nodo para el ciclo de canciones
struct nodo{
	struct nodo *siguiente;
	struct nodo *anterior;
};
typedef struct nodo nodo;
nodo *primero = NULL;
nodo *ultimo = NULL;
//*****FUNCIONES*****
void inicializacionArchivo();//Crea un archivo en la variable de entorno "Program Files".
			     //Si hay error agregar un caso para " Archivos del programa". getenv("ArchivosdelPrograma")
void lecturaArchivo();//Para la lectura habitual del programa, actualizacion de rutas.
		      
		

int main(){
	FILE *archivo;
	char *nombreArchivo = (char *)malloc(sizeof(char));
	inicializacionArchivo(*archivo, *nombreArchivo);//INICIALIZACION DEL ARCHIVO
	int op;
	//MENU
	do{
	puts("Reproductor de musica.\n1)Agregar Canciones.\n2)Entrar al reproductor.\n3)Salir.\n");
	scanf("%d", &op);
	switch(op){
		case 1:puts("Para agregar canciones agregar tus archivos.mp3 a la carpeta \"UploadSongs\" en %USERPROFILE%\\ProgramFiles\\Mplayer\\.\n");break;
		case 2:
		system("cls"); puts("Mplayer V0.1\n");
		lecturaArchivo();break;
		case 3: exit(-1);break;
		default: puts("Opcion no valida, intente de nuevo.\n");
	}
	}while(op != 3);
	free(nombreArchivo);
	fclose(archivo);
	return 0;
}




void inicializacionArchivo(FILE *archivo, char *nombreArchivo){
	sprintf(nombreArchivo, "%s\\Mplayer\\songs.txt", getenv("ProgramFiles"));
	archivo = fopen(nombreArchivo, "w");
	if(archivo == NULL){
		puts("[Error] Fallo al inicialziar archivo.\n");
	}
}

void lecturaArchivo(){
	puts("ola");
}
