#ifndef LIST_H
#define LIST_H

#define TRUE    1
#define FALSE   0

#define LIST_LEN    100
typedef int LData;

typedef struct s_list
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} t_list;

void ListInit(t_list *plist);
void LInsert(t_list *plist, LData data);

int LFirst(t_list *plist, LData *data);
int LNext(t_list *plist, LData *data);

LData LRemove(t_list *plist);
int LCount(t_list *plist);

#endif