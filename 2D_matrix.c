#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* down;
    struct node* before;
    struct node* up;
};  
struct node* twoDmatrix(int m , int n){
    int i,j,num;
    struct node* temp;
    struct node* currenthead;
    struct node* head=NULL;
    struct node* tail=NULL;
    struct node* prevhead=NULL;  
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->down=NULL;
        temp->before=NULL;
        temp->up=NULL;
        if (head==NULL){
            head=temp;
            tail=head;
            currenthead=head;
        }
       else if(prevhead==NULL&&currenthead!=NULL){
            tail->next=temp;
            temp->before=tail;
            tail=tail->next;
        }
        else if(currenthead==NULL){
            currenthead=temp;
            prevhead->down=currenthead;
            currenthead->up=prevhead;
            tail=currenthead;
        }
        else if(currenthead!=NULL&&prevhead!=NULL){
            tail->next=temp;
            temp->before=tail;
            (prevhead->next)->down=temp;
            temp->up=(prevhead->next);
            prevhead=prevhead->next;
            tail=tail->next;
           
        }
    }
    prevhead=currenthead;
    currenthead=NULL;
  }
  return head;
}
struct node* display(struct node* head,int m, int n){
    int i,j;
    printf("your matrix is:\n");
    for(i=0;i<m;i++){
         struct node* temp=head;
        for(j=0;j<n;j++){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        head=head->down;
        printf("\n");
    }

}
struct node* element_access(struct node* head){
    char ch;
    int n;
    struct node* temp=head;
    printf("current position is head which value is:%d\n",head->data);
    printf("Note:\n b-->before\n n-->next\n d-->down\n u-->up\n e with any number-->Exit\n enter your choice with no of move:\n");
    while(ch!='e'){
    start:    
    scanf(" %c %d",&ch,&n);
    if(ch=='b'){
        for(int i=0;i<n;i++){
           if(temp->before==NULL){
            printf("expected before element not present!!\n");
            goto start;
           }  
           else{
            temp=temp->before;
           }
        }
    }
    else if(ch=='n'){
        for(int i=0;i<n;i++){
           if(temp->next==NULL){
            printf("desire next element not present!!\n");
            goto start;
           }  
           else{
            temp=temp->next;
           }
        }
    }
    else if(ch=='u'){
        for(int i=0;i<n;i++){
           if(temp->up==NULL){
            printf("your wanted Up element not present!!\n");
            goto start;
           }  
           else{
            temp=temp->up;
           }
        }
    }
    else if(ch=='d'){
        for(int i=0;i<n;i++){
           if(temp->down==NULL){
            printf("sorry! expected Down element not present!!\n");
            goto start;
           }  
           else{
            temp=temp->down;
           }
        }
    }
    else if(ch!='e'){
        printf("Invalid input! try again..!\n");
        goto start;
    }
    printf("current position value is %d\n",temp->data);        
}}
int main(){
    int m,n;
    struct node* head;
    printf("enter the matrix type:");
    scanf("%d %d",&m,&n);
    printf("enter the elements:");
    head=twoDmatrix(m,n);
    display(head,m,n);
    element_access(head);

    return 0;
}