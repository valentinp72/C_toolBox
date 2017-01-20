#include <stdlib.h>

/**
 * \struct t_element struct.h	
 * \brief Structure contenant une case ainsi que le lien pour connaître la suivante de même que la précédente.Utile pour l'utilisation d'une liste
 */
typedef struct element{
	<*TYPE*> value;		/*!< Coordonnées et contenu de la case */
       	struct element * pred;	/*!< Lien vers la case précédente */
       	struct element * succ;	/*!< Lien vers la case suivante */
}
t_element;


/**
 * \struct t_liste struct.h	
 * \brief Structure contenant le drapeau et l'élément courant. Utile pour l'utilisation d'une liste
 */
typedef struct {
	t_element * flag;	/*!< Element du drapeau */
	t_element * ce;		/*!< Element de l'élément courant */
}
t_list;



void initList(t_list * list ){
	list -> flag = malloc(sizeof(t_element));
	list -> flag -> pred = list -> flag;
	list -> flag -> succ = list -> flag;
	list -> ce = list -> flag;
}

int listEmpty(t_list * list){
	return(list -> flag -> succ == list -> flag);
}

int 	offList(t_list * list){
	return(list -> ce == list -> flag);
}

void head(t_list * list){
	if(!emptyList(list)){
		list -> ce = list -> flag -> succ;
	}
}

void tail(t_list * list){
	if(!emptyList(list)){
		list -> ce = list -> flag -> pred;
	}
}

void next(t_list * list){
	if(!offList(list)){
		list -> ce = list -> ce -> succ;
	}
}

void previous(t_list * list){
	if(!offList(list)){
		list -> ce = list -> ce -> pred;
	}
}

void valueElt(t_list * list, <*TYPE*> * v){
	if(!offList(list)){
		*v = list -> ce -> value;
	}
}

void changeElt(t_list * list, <*TYPE*> v){
	if(!offList(list)){
		list -> ce -> value = v;
	}
}

void rmvElt(t_list * list){
	
	if(!listEmpty(list)) {
		t_element * temp;
		(list -> ce -> succ) -> pred = list -> ce -> pred;
		(list -> ce -> pred) ->succ = list -> ce -> succ;
		temp = list -> ce;
		list -> ce = list -> ce-> pred;
		free(temp);
	}		
}

void appendRight(t_list * list, <*TYPE*> v){
	if(listEmpty(list) || !offList(list)){
		t_element * new;
		new = malloc(sizeof(t_element));
		new -> value = v;
		new -> succ = list -> ce -> succ;
		new -> pred = list -> ce;
		list -> ce -> succ -> pred = new;
		list -> ce -> succ = new;
		list -> ce = new;
	}
}

void appendLeft(t_list * list, <*TYPE*> v){
	if(listEmpty(list) || !offList(list)){
		t_element * new;
		new = malloc(sizeof(t_element));
		new -> value = v;
		new -> pred = list -> ce -> pred;
		new -> succ = list -> ce;
		list -> ce -> pred -> succ = new;
		list -> ce -> pred = new;
		list -> ce = new;
	}
}

void emptyList(t_list * list){
	tail(list);
	while(!listEmpty(list)){
		rmvElt(list);
	}
}

