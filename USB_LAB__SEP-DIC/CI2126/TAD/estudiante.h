/*   
 * ARCHIVO: estudiante.h  
 * DESCRIPCION: Definición del TAD ESTUDIANTE 
 * FECHA: 15/10/2008 
 * AUTOR: Rosseline Rodriguez  
 */   

typedef struct s_est 
{         
   char carnet [9];         
   char nombre [80];         
   char apellido [80];         
   int edad;         
   int carrera;         
   float indice; 
} STRUCTEST;  

typedef STRUCTEST *ESTUDIANTE;  

/* Constructor y Destructor */  
ESTUDIANTE E_Crear(); 
/* PRE: ninguna
   POST: Devuelve un estudiante creado sin datos */  

void E_Destruir (ESTUDIANTE E); 
/* PRE: Dado un estudiante creado    
   POST: Libera el espacio de memoria ocupado por E */  

/* Observadores */  
char *E_Carnet(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado    
   POST: Devuelve un apuntador al carnet del estudiante E. 
         Si desea copiarlo utilice la funcion strcpy. */  

char *E_Nombre(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado    
   POST: Devuelve un apuntador al nombre del estudiante E. 
         Si desea copiarlo utilice la funcion strcpy. */ 

char *E_Apellido(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado
   POST: Devuelve un apuntador al apellido del estudiante E. 
         Si desea copiarlo utilice la funcion strcpy. */  

int E_Edad(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado
   POST: Devuelve la edad del estudiante E */  

int E_Carrera(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado
   POST: Devuelve el codigo de la carrera del estudiante E */  

float E_Indice(ESTUDIANTE E); 
/* PRE: Dado un estudiante creado
   POST: Devuelve el índice del estudiante E */  

/* Modificadores */  
ESTUDIANTE E_ModifCarnet(ESTUDIANTE E, char carnet[]); 
/* PRE: Dado un estudiante creado y un carnet válido 
   POST: Modifica el carnet del estudiante con el carnet dado  */  

ESTUDIANTE E_ModifNombre(ESTUDIANTE E, char nombre[]); 
/* PRE: Dado un estudiante creado y un nombre válido (no contiene espacios en blanco)
   POST: Modifica el nombre del estudiante con el nombre dado  */  

ESTUDIANTE E_ModifApellido(ESTUDIANTE E, char apellido[]); 
/* PRE: Dado un estudiante creado y un apellido válido (no contiene espacios en blanco)
   POST: Modifica el apellido del estudiante con el apellido dado  */  

ESTUDIANTE E_ModifEdad(ESTUDIANTE E, int edad); 
/* PRE: Dado un estudiante creado y edad>0
   POST: Modifica la edad del estudiante con la edad dada */  

ESTUDIANTE E_ModifCarrera(ESTUDIANTE E, int carrera); 
/* PRE: Dado un estudiante creado y carrera>0    
   POST: Modifica la carrera del estudiante con la carrera dada */  

ESTUDIANTE E_ModifIndice(ESTUDIANTE E, float indice); 
/* PRE: Dado un estudiante creado y indice>0.0    
   POST: Modifica la carrera del estudiante con la carrera dada */ 