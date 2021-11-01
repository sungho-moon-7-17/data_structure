#include"list.h"

void ListInit(t_list *plist)
{
	plist->curPosition = 0;
	plist->numOfData = 0;
}

void LInsert(t_list *plist, LData data)
{
	plist->arr[plist->curPosition] = data;
	plist->numOfData++;
	plist->curPosition++;
}

int LFirst(t_list *plist, LData *data)
{
	if (plist->numOfData <= 0)
		return (FALSE);
	plist->curPosition = 0;
	*data = plist->arr[0];
	return (TRUE);
}

int LNext(t_list *plist, LData *data)
{
	plist->curPosition++;
	if ((plist->curPosition > plist->numOfData - 1) || (plist->numOfData >= 100))
		return (FALSE);
	*data = plist->arr[plist->curPosition];
	return (TRUE);
}

LData LRemove(t_list *plist)
{
	LData return_value =  plist->arr[plist->curPosition];
	plist->numOfData--;
	for(int i = plist->curPosition; i < plist->numOfData; i++)
		plist->arr[i] = plist->arr[i + 1];
	plist->curPosition--;
	return (return_value);
}

int LCount(t_list *plist)
{
	return (plist->numOfData);
}