/*
 * exemple.c
 *
 *  Created on: 12 de fev de 2021
 *      Author: nicolas-kruger
 */


#include "exemple.h"

void parser(char * json){
	cJSON* parser = cJSON_Parse(json);
	cJSON* child = parser->child;
	cJSON* next = parser->child->next;
	printf("nome: %s\n\r",child->string);
	printf("valor: %d\n\r",child->valueint);
	printf("nome: %s\n\r",next->string);
	printf("valor: %d\n\r",next->valuestring);

}
