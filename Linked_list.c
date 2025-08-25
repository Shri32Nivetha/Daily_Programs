#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* Create(int dat){
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=dat;
    new->next=NULL;
    return new;
}

void Insert_Beginning(int dat){
    struct Node *new=Create(dat);
    new->next=head;
    head=new;
}

void Insert_End(int dat){
    struct Node *new=Create(dat);
    if(head == NULL){
        head=new;
        return;
    }
    struct Node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=new;
}

void Insert_Position(int dat,int pos){
    if (pos<0){
        printf("Invalid Position");
        return;
    }

    if (pos==0){
        Insert_Beginning(dat);
        return;
    }
    struct Node *temp=head;
    for(int i=1;i<pos && temp!= NULL;i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid Position!");
        return;
    }
    struct Node *new=Create(dat);
    new->next = temp->next;
    temp->next=new;
}

void Delete_Beginning(){
    if (head==NULL){
        printf("List is Empty\n");
        return;
    }
    struct Node *temp=head;
    head=head->next;
    free(temp);
}

void Delete_End(){
    if (head==NULL){
        printf("List is Empty\n");
        return;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    struct Node *temp=head;
    struct Node *prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=NULL;
}

void Delete_Pos(int pos){
    if(head==NULL){
        printf("List is Empty\n");
        return;
    }
    if(pos<0){
        printf("Invalid Postion\n");
        return;
    }
    if (pos==0){
        Delete_Beginning();
        return;
    }
    struct Node *temp=head;
    struct Node *prev=NULL;
    for(int i=0;i<pos && temp!=NULL;i++){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Invalid Position");
        return;
    }
    prev->next=temp->next;
    free(temp);
}


void Delete(int dat){
    struct Node *temp=head;
    struct Node *prev=NULL;
    if( temp != NULL && temp->data==dat){
        head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=dat){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Value not Found!");
        return;
    }
    prev->next=temp->next;
    free(temp);
}

int Search(int dat){
    struct Node *temp=head;
    int c=0;
    while(temp!=NULL){
        if(temp->data==dat){
            return c;
        }
        temp=temp->next;
        c++;
    }
    return -1;
}

void Display(){
    struct Node *temp=head;
    if(temp==NULL){
        printf("List is Empty!");
        return;
    }
    while(temp != NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    int ch,pos,val;
    while(1){
        printf("1.Insert at Beginning\n2.Insert at End\n3.Insert at Position\n4.Delete at Beginning\n5.Delete at End\n6.Delete at Position\n7.Delete\n8.Search\n9.Display\n10.Exit\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("\nEnter Value:");
        scanf("%d",&val);
        Insert_Beginning(val);
        break;
        case 2:
        printf("\nEnter Value:");
        scanf("%d",&val);
        Insert_End(val);
        break;
        case 3:
        printf("\nEnter Position:");
        scanf("%d",&pos);
        printf("\nEnter Value:");
        scanf("%d",&val);
        Insert_Position(val,pos);
        break;
        case 4:
        Delete_Beginning();
        break;
        case 5:
        Delete_End();
        break;
        case 6:
        printf("\nEnter Position:");
        scanf("%d",&pos);
        Delete_Pos(pos);
        break;
        case 7:
        printf("\nEnter Value:");
        scanf("%d",&val);
        Delete(val);
        break;
        case 8:
        printf("\nEnter Value:");
        scanf("%d",&val);
        int ind=Search(val);
        if(ind==-1){
            printf("Element not found!");
        }
        else{
            printf("Element found at position %d",ind);
        }
        break;
        case 9:
        Display();
        break;
        case 10:
        exit(0);
        default:
        printf("Invalid Choice!");
    }
    }
}