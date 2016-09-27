/* 
 * ARCHIVO: estudiante.c  
 * DESCRIPCION: Definición de las operaciones del TAD ESTUDIANTE 
 * FECHA: 15/10/2008 
 * AUTOR: Rosseline Rodriguez  
 */   

#include <stdio.h> 
#include "estudiante.h"  

/* Constructor y Destructor */  

ESTUDIANTE E_Crear() 
{
    ESTUDIANTE E;    

    if ((E=(ESTUDIANTE)malloc(sizeof(STRUCTEST)))!=NULL)    
    {
       E->carnet[0] = '\0';
       E->nombre[0] = '\0';
       E->apellido[0] = '\0';
       E->edad = 0;
       E->carrera = 0;
       E->indice = 0.0;    
    }
    return(E); 
}  

void E_Destruir (ESTUDIANTE E) 
{  
    free(E); 
}       

/* Observadores */  

char *E_Carnet(ESTUDIANTE E) 
{
    return(E->carnet); 
}

char *E_Nombre(ESTUDIANTE E) 
{   
    return(E->nombre); 
}  

char *E_Apellido(ESTUDIANTE E) 
{ 
    return(E->apellido); 
}

int E_Edad(ESTUDIANTE E) 
{  
    return(E->edad); 
}  

int E_Carrera(ESTUDIANTE E) 
{   
    return(E->carrera); 
}

float E_Indice(ESTUDIANTE E) 
{  
    return(E->indice); 
}

/* Modificadores */  

ESTUDIANTE E_ModifCarnet(ESTUDIANTE E, char carnet[]) 
{ 
   strcpy(E->carnet,carnet);    
   return(E); 
}  

ESTUDIANTE E_ModifNombre(ESTUDIANTE E, char nombre[]) 
{  
   strcpy(E->nombre,nombre);    
   return(E); 
}  

ESTUDIANTE E_ModifApellido(ESTUDIANTE E, char apellido[]) 
{ 
   strcpy(E->apellido,apellido);    
   return(E); 
}  

ESTUDIANTE E_ModifEdad(ESTUDIANTE E, int edad) 
{ 
   E->edad=edad;    
   return(E); 
}  

ESTUDIANTE E_ModifCarrera(ESTUDIANTE E, int carrera) 
{ 
   E->carrera=carrera; 
   return(E); 
}  

ESTUDIANTE E_ModifIndice(ESTUDIANTE E, float indice) 
{ 
   E->indice=indice;    
   return(E); 
} 