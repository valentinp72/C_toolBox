#include <stdlib.h>

typedef struct element{
	<*TYPE*> value;		/*!< Coordonnées et contenu de la case */
       	struct element * pred;	/*!< Lien vers la case précédente */
       	struct element * succ;	/*!< Lien vers la case suivante */
}
t_element;


typedef struct {
	t_element * flag;	/*!< Element du drapeau */
	t_element * ce;		/*!< Element de l'élément courant */
}
t_list;



void initList(t_list * list );
int listEmpty(t_list * list);
int offList(t_list * list);
void head(t_list * list);
void tail(t_list * list);
void next(t_list * list);
void previous(t_list * list);
void valueElt(t_list * list, <*TYPE*> * v);
void changeElt(t_list * list, <*TYPE*> v);
void rmvElt(t_list * list);
void appendRight(t_list * list, <*TYPE*> v);
void appendLeft(t_list * list, <*TYPE*> v);
void emptyList(t_list * list);
