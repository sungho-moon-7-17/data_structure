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

int LFirst(t_list *plist, LData * pdata)
{
    plist->curPosition = 0;
    if (plist->numOfData <= 0)
        return (FALSE);
    *pdata = plist->arr[plist->curPosition];
    return (TRUE);
}

int LNext(t_list *plist, LData *pdata)
{
    plist->curPosition++;
	if (LIST_LEN < plist->numOfData || plist->curPosition > (plist->numOfData - 1))
		return (FALSE);
    *pdata = plist->arr[plist->curPosition];
    return (TRUE);
}

LData LRemove(t_list *plist)
{
	LData temp = plist->arr[plist->curPosition];
    for (int i = plist->curPosition; i < plist->numOfData - 1; i+
	+)
    {
        plist->arr[i] = plist->arr[i + 1];
    }
	plist->numOfData--;
	plist->curPosition--;
	return (temp);
}

int LCount(t_list *plist)
{
    return plist->numOfData;
}