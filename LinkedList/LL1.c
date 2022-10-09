#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node *head;
//*******************************************************************
void create(int num)   //Creation of Linked List
{
    struct Node *newnode,*temp;
    int item,i;
    if(head!=NULL)
    {
        printf("List Already created!!");
        return;
    }
    for(i=1;i<=num;i++)
    {
        printf("Enter information: ");
        scanf("%d",&item);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=item;
        newnode->next=NULL;
        if(head==NULL)
            head=newnode;
        else
            temp->next=newnode;
        temp=newnode;
    }
    return;
}
//*******************************************************************
void traverseList(struct Node *n)  // Traversing the list
{
    n=head;
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
    return;
}
//*******************************************************************
void insert_first(int item)      // Inserting the node first
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=item;
    newnode->next=head;
    head=newnode;
    return;
}
//*******************************************************************
void delete_first()   // Deleting first node of List
{
    struct Node *temp;
    if(head==NULL)
    {
        printf("Underflow....\n");
        return;
    }
    temp=head;
    head=head->next;
    printf("%d Element is deleted successfully..\n",temp->data);
    temp->next=NULL;
    free(temp);
    return;
}
//*******************************************************************
int count()  // Count the number of nodes
{
    int c=0;
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
//*******************************************************************
void insert_last(int item)  // Enter node in last
{
    struct Node *newnode,*temp;
    if(head==NULL)
    {
        printf("Underflow...\n");
        return;
    }
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    temp->next=newnode;
    newnode->data=item;
    newnode->next=NULL;
    return;
}
//*******************************************************************
void delete_last()   // Delete Last
{
   struct Node *temp,*loc;
   if(head==NULL)
   {
       printf("Underflow..\n");
       return;
   }
   temp=head;
   while(temp->next!=NULL)
   {
      loc=temp;
      temp=temp->next;
   }
   if(temp==head)
    head=NULL;
   else
    loc->next=NULL;
    printf("%d element is deleted successfully!!\n",temp->data);
   free(temp);
   return;
}
//*******************************************************************
void search(int ser)
{
    int c=0,flag;
    struct Node *temp;
    if(head==NULL)
    {
        printf("Underflow..\n");
        return;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(ser==temp->data)
        {
            printf("%d Element is found at %d position..\n",ser,c+1);
            flag=0;
        }
        else
            flag=1;
        c++;
        temp=temp->next;
    }
    if(flag==1)
        printf("Element not found!!\n");
    return;
}
//*******************************************************************
void random_insert(int item,int pos)
{
    int i;
    struct Node *newnode, *temp;
    if(head==NULL)
    {
        printf("Underflow...\n");
        return;
    }
    temp=head;
    newnode=(struct Node*)malloc(sizeof(struct Node*));
    newnode->data=item;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("%d is inserted in %d position",item,i+1);
    return;
}
//*******************************************************************
void random_delete(int pos)
{
    int i;
    struct Node *temp, *loc;
    if(head==NULL)
    {
        printf("Underflow...\n");
        return;
    }
    temp=head;
    for(i=1;i<pos+1;i++)
    {
        loc=temp;
        temp=temp->next;
    }
    loc->next=temp->next;
    temp->next=NULL;
    printf("%d element is deleted...\n",temp->data);
    free(temp);
    return;
}
//*******************************************************************
int main()
{
    int ch,item,n,key,pos;
    while(1){
        printf("Enter 1 for Creation of List\nEnter 2 for Traversal of List\nEnter 3 for Insert First of List\nEnter 4 for Delete First of List\nEnter 5 for Insert Last of List\nEnter 6 for Delete Last of List\nEnter 7 for Random Insert of List\nEnter 8 for Random Delete of List\nEnter 9 for Search of Element\nEnter 10 for count of List\nEnter 0 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter the number of nodes: "); scanf("%d",&n); create(n); break;
            case 2: traverseList(head); break;
            case 3: printf("Enter the data to be inserted first: "); scanf("%d",&item); insert_first(item); break;
            case 4: delete_first(); break;
            case 5: printf("Enter the data to be inserted last: ");scanf("%d",&item); insert_last(item);break;
            case 6: delete_last();break;
            case 7: printf("Enter the data and the position of element insert:..\n"); scanf("%d%d",&item,&pos); random_insert(item,pos); break;
            case 8: printf("Enter the position of element to be deleted..\n"); scanf("%d",&pos); random_delete(pos); break;
            case 9: printf("Enter the element to be searched: ");scanf("%d",&key); search(key); break;
            case 10: printf("The total count is : %d\n",count()); break;
            case 0: exit(0); break;
            default: printf("Please enter valid choice..\n");
                }
    }
    return 0;
}
