#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

// INSERT AT BEGINNING
struct node *insertbeg(struct node *head, int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL){
        head->prev = newnode;
    }

    return newnode;
}

// INSERT AT END
struct node *insertend(struct node *head, int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(head == NULL){
        return newnode;
    }

    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->prev = ptr;

    return head;
}

// INSERT AT POSITION
struct node *insertpos(struct node *head, int data, int pos){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(pos == 1){
        newnode->next = head;
        if(head != NULL){
            head->prev = newnode;
        }
        return newnode;
    }

    struct node *ptr = head;
    int i;

    for(i = 1; i < pos-1 && ptr != NULL; i++){
        ptr = ptr->next;
    }

    if(ptr == NULL){
        printf("Invalid position\n");
        free(newnode);
        return head;
    }

    newnode->next = ptr->next;
    newnode->prev = ptr;

    if(ptr->next != NULL){
        ptr->next->prev = newnode;
    }

    ptr->next = newnode;

    return head;
}

// DELETE FROM BEGINNING
struct node *delbeg(struct node *head){
    if(head == NULL){
        return NULL;
    }

    struct node *temp = head;

    if(head->next == NULL){
        free(head);
        return NULL;
    }

    head = head->next;
    head->prev = NULL;

    free(temp);
    return head;
}

// DELETE FROM END
struct node *delend(struct node *head){
    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        free(head);
        return NULL;
    }

    struct node *ptr = head;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->prev->next = NULL;
    free(ptr);

    return head;
}

// DELETE AT POSITION
struct node *delpos(struct node *head, int pos){
    if(head == NULL){
        return NULL;
    }

    if(pos == 1){
        return delbeg(head);
    }

    struct node *ptr = head;
    int i;

    for(i = 1; i < pos && ptr != NULL; i++){
        ptr = ptr->next;
    }

    if(ptr == NULL){
        printf("Invalid position\n");
        return head;
    }

    if(ptr->next != NULL){
        ptr->next->prev = ptr->prev;
    }

    ptr->prev->next = ptr->next;

    free(ptr);
    return head;
}

// DISPLAY
void display(struct node *head){
    struct node *ptr = head;

    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// MAIN FUNCTION
int main(){
    struct node *head = NULL;
    int data, pos, choice;

    while(1){
        printf("\n1:insertbeg\n2:insertend\n3:insertpos\n4:delbeg\n5:delend\n6:delpos\n7:display\n8:exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                head = insertbeg(head, data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                head = insertend(head, data);
                break;

            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &pos);
                head = insertpos(head, data, pos);
                break;

            case 4:
                head = delbeg(head);
                break;

            case 5:
                head = delend(head);
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                head = delpos(head, pos);
                break;

            case 7:
                display(head);
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}