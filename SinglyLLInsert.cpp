//singly linear link list
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
      PNODE first;
      int iCount;

      SinglyLL()
      {
        cout<<"Object of singlyLL gets created\n";
        first = NULL;
        iCount = 0;
      }

      void InsertFirst(int no)
      {
        PNODE newn = NULL;
        
      }

      void InsertLast(int no)
      {
        PNODE newn = NULL;
        PNODE temp = NULL;
        
        newn->data = no;
        newn->next = NULL;
        if(first == NULL)
        {

        }
      }

      void InsertAtPos(int no,int pos)
      {}

      void DeleteFirst()
      {}

      void DeleteLast()
      {}

      void DeleteAtPos(int pos)
      {}

      void Display()
      {
        
      }

      int Count()
      {
        return iCount;
      }
};

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are :"<<iRet<<"\n";
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are :"<<iRet<<"\n";
    
    return 0;
}
