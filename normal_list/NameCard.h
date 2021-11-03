#ifndef NAME_CARD_H
#define NAME_CARD_H

#define NAME_LEN	30
#define PHONE_LEN	30

typedef struct s_namecard
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
} t_name_card;

t_nameCard *MakeNameCard(char *name, char *phone);

void ShowNameCardInfo(t_

#endif 
