/ *
** Para Ser USADO en Computacion I y II.
** Versión 1.06 08/11/2010
** Elaborado por: V. Theoktisto
* /

/ * - C específica de macro (! Necesario para el preprocesamiento) * /
#ifndef _HOARE_H_INCLUDED_
#define _HOARE_H_INCLUDED_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// # Include <stddef.h>

/ * Definiciones práctica * /
#define PTR *
#define dir &
COLA #define (a, b) un ## b
#define XPREFIX (s) s
#define prefijo (a, b) XPREFIX (a) b

#define MAX (a, b) (((a)> (b))? (a) :( b))
#define MIN (a, b) (((b)> (a))? (a) :( b))
ABS #define (a) ((a) (a):? (- (A)))

#define EVEN (n) (! ((n) & 1))


   {Unsigned temp char [sizeof (xvar) == sizeof (yvar)? (Firmado) sizeof (xvar): -1]; \
     memcpy (temperatura, y yvar, sizeof (xvar)); \
     memcpy (y yvar, y xvar, sizeof (xvar)); \
     memcpy (y xvar, temperatura, sizeof (xvar)); \
    } While (0)

// #define SWAP (a, b) hacer {typeof (x) = a ^ b; b ^ = a; a ^ = b;} while (0)
// #define SWAP (a, b) hacer {__ __ typeof (a) t = a; a = b; b = t;} while (0)
/ * --- Es un número una potencia de dos --- * /
#define ISPOWEROF2 (x) (! ((x) y ((x) -1)))
/ * _NUMCELLS () Macro * /
#define NUMCELLS (_arraytype) (sizeof (_arraytype) / sizeof (* _ ArrayType))
/ * Negación de complemento a dos como una macro * /
#define ONESCOMPLEMENT (x) ((x) ^ (~ 0)))
/ * Negación de complemento a dos como una macro * /

/ * SQUARE () macro, forma final * /
#define cuadrado (x) ((x) * (x))
/ * Se llena un valor entero con los de una manera independiente portátil del tamaño de letra * /
#define Allones 0 ~

/ * Distinguir entre caracteres ASCII y wchar caracteres: * /
#if UNICODE
    #define dchar wchar_t
    TEXTO (s) #define L ## s
#más
    #define dchar Char
    TEXTO (s) #define es
#terminara si

// Dchar h [] = TEXTO ( "hola");

/ * --- Valer durante la compilación (no en tiempo de ejecución) ---
 * CompilerAssert (exp) está diseñado para proporcionar la comprobación de errores en
 * Tiempo de compilación de las suposiciones hechas por el programador en tiempo de diseño
 * Y sin embargo no produce ningún código en tiempo de ejecución.
 * Ejemplo: si (CompilerAssert (sizeof (int) == 4)) ... * /
#define CompilerAssert (predicado) extern _CompilerAssert char [(predicado) 1: -1]

/ * --- Estos se definen como palabras clave en C ++ --- * /
#ifdef __cplusplus
	#ifdef _WIN32 // cplusplus en la victoria no define este
		#define y &&
		#define o ||
		#define no!
		#define Y &&
		#define O ||
		#define NO!
		typedef int bool;
		enum {false = 0, true = 1};
	#else // no cplusplus en la victoria

		#define O o
		#define NO no
	#terminara si
#más
	#define y &&

	#define no!
	#define Y &&
	#define O ||
	#define NO!
	typedef int bool;
	enum {false = 0, true = 1};
#terminara si

typedef bool_t bool;
enum {FALSO = 0, = VERDADERO FALSO!};

/ * Macros decisivo para la asignación de memoria * /

#define CREATE (DataStorage) calloc (1, sizeof (DataStorage))
#define NEWPTR (PointerType) malloc (sizeof (* PointerType))
#define NUEVO (PointerVar) (PointerVar = malloc (sizeof (* PointerVar)))
#define NEW_CLEAR (PointerVar) (PointerVar = calloc (1, sizeof (* PointerVar)))
#define CREATE_ARRAY (Dim, DataStorage) calloc (Dim, sizeof (DataStorage))
#define BORRAR (PointerVar) (gratis (PointerVar), PointerVar = NULL)
#define DESTRUIR (ReservedStoragePtr) (gratis (ReservedStoragePtr), ReservedStoragePtr = NULL)

#ifdef __cplusplus

    newptr #define (puntero) (malloc (sizeof (* Puntero)))
    new_clear #define (puntero) (Puntero = calloc (1, sizeof (* Puntero)))
    #define new_array (Dim, Tipo) (calloc (Dim, sizeof (Tipo)))
    #define eliminar (puntero) (gratis (Puntero), puntero = NULL)
#terminara si

/ * Afirmación general (predicado) * /
_assert #define (predicado) check_assert ( "Asersión no se cumple el párrafo", predicado)

/ * Condición previa (predicado) * /
#define _pre (predicado) check_assert ( "Precondición no se cumple el párrafo", predicado)

/ * Condición posterior (predicado) * /
_POST #define (predicado) check_assert ( "Postcondición no se cumple el párrafo", predicado)

/ * Invariante (predicado) * /
#define _inv (predicado) check_assert ( "Invariante no se cumple el párrafo", predicado)

/ * Condición previa (expresión entera) * /


#ifdef NDEBUG

	check_assert #define (Mensaje, predicado) ((void) 0)

#else / * No NDEBUG. * /

	#define check_assert (Mensaje, predicado) \
    ((Void) ((predicado) 0:? __ Check_assert (Mensaje, # predicado, __ __ ARCHIVO, __ LINE__)))


    ((Void) printf ( ">>> En% s:% u:.% S '% s' \ n <<< Ejecucion Cesara Ahora \ n", archivo Línea, Mensaje, predicado), salida (1), 0)

/ * Nota utilización de ANSI-C \ stringize "instalación. * /

#endif / * * NDEBUG /

#endif / * ifndef _HOARE_H_INCLUDED_ * /
