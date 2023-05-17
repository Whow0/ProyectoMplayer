#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
//Nodo para el ciclo de canciones
struct nodo{
	struct nodo *siguiente;
	struct nodo *anterior;
};
typedef struct nodo nodo;
nodo *primero = NULL;
nodo *ultimo = NULL;
//*****FUNCIONES*****
void lecturaArchivo();

int main(){
	FILE *archivo;
	char *nombreArchivo = (char *)malloc(sizeof(char));
	char *rutaDirectorio = (char *)malloc(sizeof(char));
	char *rutaCompArchivo = (char *)malloc(sizeof(char));
	//inicializacionArchivo(*archivo, *nombreArchivo);//INICIALIZACION DEL ARCHIVO
	int op;
	puts("test");
	do{
	puts("Reproductor de musica.\n1)Agregar Canciones.\n2)Entrar al reproductor.\n3)Salir.\n");
	scanf("%d", &op);
	switch(op){
		case 1:
		puts("Para agregar canciones agregar tus archivos.mp3 a la carpeta \"UploadSongs\" en %USERPROFILE%\\ProgramFiles\\Mplayer\\.\n");
		break;
		case 2:
		system("cls"); puts("Mplayer V0.1\n");
		lecturaArchivo(*rutaDirectorio, *archivo, *rutaCompArchivo, *nombreArchivo);//Al ejecutar l;a funcion da error, no por lo que contiene la funcion, no se proque xd
		;break;
		case 3: return 0;break;
		default: puts("Opcion no valida, intente de nuevo.\n");break;
	}
	}while(op != 3);
	
	free(nombreArchivo);
	free(rutaDirectorio);
	//closedir(directorio);
	fclose(archivo);
	fclose(archivo);
}

void lecturaArchivo(char *rutaDirectorio, FILE *archivo,char *rutaCompArchivo, char *nombreArchivo){
	/*
	DIR *directorio;
	//arbir directorio
	struct dirent *entrada;
	sprintf(rutaDirectorio, "%s\\Mplayer\\UploadSongs", getenv("ProgramFiles"));
	directorio = opendir(rutaDirectorio);
	if(directorio == NULL){
		puts("[Error] Fallo al abrir el directorio.\n");
	}

	Abrir el arcivo en el que se guardaran las rutas
	sprintf(nombreArchivo, "%s\\Mplayer\\songs.txt", getenv("ProgramFiles"));
	archivo = fopen(nombreArchivo, "w");
	if(archivo == NULL){
		puts("[Error] Fallo al inicialziar archivo.\n");
	}	
	//lectura de archivos
	while((entrada = readdir(directorio)) != NULL){
		if(strcmp(entrada->d_name, ".") ==0 || strcmp(entrada->d_name, "..")==0)
			continue;

	//ruta del directorio
	snprintf(rutaCompArchivo, sizeof(rutaCompArchivo), "%c/%s", nombreArchivo, entrada->d_name);
	fprintf(archivo,"%s\n", rutaCompArchivo);
	}
	*/
}
