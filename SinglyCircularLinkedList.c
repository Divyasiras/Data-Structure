//singly circular link list Used do while loop
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first ,PPNODE last,int no)
{ 
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if((*first == NULL) && (*last == NULL)) //@
   {
      *first = newn;
      *last = newn;
   }
   else
   {
      newn->next = *first;
      *first = newn;
   }
   (*last)->next = *first;


}

void InsertLast(PPNODE first ,PPNODE last,int no)
{
    PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if((*first == NULL) && (*last == NULL))
   {
      *first = newn;
      *last = newn;
   }
   else
   {
      (*last)->next = newn;//@
      *last = newn;        //@
   }
   (*last)->next = *first;
   
}

void InsertAtPos(PPNODE first ,PPNODE last,int no,int pos)
{
   int iCount = 0;

   iCount = Count(*first,*last);

   if((pos< 1)) || (pos > iCount+1)
   {
      printf("Invalid Position\n");
      return;
   }
   if(pos == 1)
   {
      InsertFirst(first,last);
   }
   if else(pos == iCount+1)
   {
      InsertLast(first,last,no);
   }
   else
   {
      newn = (PNODE)malloc(sizeof(NODE));

      newn->data = no;\
      newn->next = NULL;

      temp = *first;

      for
   }
}

void DeleteFirst(PPNODE first,PPNODE last)  //
{
   PNODE temp = NULL;
  if(*first == NULL && *last == NULL)   //case 1
  {
    return;
  }
  else if(*first==*last) //case 2 single node
  {
     free(*first);
     *first = NULL;
     *last = NULL;
  }
  else                                //case 3
  {
    temp = *first;
    *first = (*first)->next;

    free(temp);

    (*last)->next = *first;
  }
}

void DeleteLast(PPNODE first,PPNODE last)
{
   if(*first == NULL && *last == NULL)   //case 1
  {
    return;
  }
  else if(*first==*last) //case 2 single node
  {
     free(*first);
     *first = NULL;
     *last = NULL;
  }
  else                                //case 3
  {
      
  }
}

void DeleteAtPos(PPNODE first,PPNODE last,int pos)
{
   else
   {
      temp = *first;
      for(i = 1; i<pos-1;i++)
      {
         
      }
   }
}

void Display(PNODE first,PNODE last)
{
   do 
   {
     printf("|%d| ->",first->data);
     first = first -> next;
   }while(first != last->next);
    
   printf("\n");
}

int Count(PNODE first,PNODE last)
{
   iCount = 0;
   
   do 
   {
     printf("|%d| ->",first->data);
     first = first -> next;
   }while(first != last->next);
    
    return 0;
}




int main()
{
    PNODE head = NULL;
    PPNODE tail = NULL;//@

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
   
    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,121);
    InsertLast(&head,&tail,111);

    Display(head,tail);

    iRet = Count(head ,tail);
    printf("Number of Nodes :%d\n",iRet);
   
    DeleteFirst(&head,&tail);
    Display(head,tail);

    iRet = Count(head ,tail);
    printf("Number of Nodes :%d\n",iRet);

    InsertAtPos(&head,&tail,105,3);
    
    
    return 0;
}
