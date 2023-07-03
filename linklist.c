#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
struct node *head=NULL;
struct node *current=NULL;
   void insert_first(){
        struct node *new=(struct node*)malloc(sizeof(struct node *));
        if(head==NULL){
          head=new;
        }
        
    }
    void printdata(){
         struct node *temp=head;

    while (temp->next!=NULL)
    {

        printf(" %d -> " , temp->data);
        temp=temp->next;  
    }
    }
void main()
 {
    int n;
    printf(" Enter how many nodes you want");
    scanf("%d",&n);    
    
    for (int i = 0; i < n; i++)
    {
        struct node *new=(struct node *)malloc(sizeof(struct node *));
        scanf("%d",&new->data);
        if(head==NULL){
            head=new;
            current=new;  
        }
        else{
            current->next=new;
            current=new;
        }
    
    } 
   
   printdata(); 

} 