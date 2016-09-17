#include <stdio.h>
#define TEXTO_MAX 50;

struct _textos;
struct _sistema;
struct _txt;

typedef enum _retorno{OK, ERROR, NO_IMPLEMENTADO} TipoRet;
typedef char* Cadena;
typedef _sistema* Sistema;
typedef _textos* textos;
typedef _txt* txt;

struct _sistema{
	char* id_sis;
	textos text;
	Sistema sig;
};

struct _textos{
	char* id_text;
	bool w;
	txt letras;
	textos sig;
};

struct _txt{
	char t;
	txt sig;
};
