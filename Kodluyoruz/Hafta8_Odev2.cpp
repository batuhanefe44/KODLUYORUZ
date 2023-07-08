#include <stdio.h>
#include <stdlib.h>

// Ba�l� liste d���m�
struct Node {
    int data;
    struct Node* next;
};

// Ba�l� listeye eleman ekleme
void Insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Ba�l� listedeki eleman say�s�n� bulma
int CountElements(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    
    return count;
}

// Ba�l� listeyi yazd�rma
void PrintList(struct Node* head) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    Insert(&head, 10);
    Insert(&head, 20);
    Insert(&head, 30);
    Insert(&head, 40);
    Insert(&head, 50);
    
    printf("Bagli listedeki elemanlar: ");
    PrintList(head);
    
    int elementCount = CountElements(head);
    printf("Bagli listedeki eleman sayisi: %d\n", elementCount);
    
    return 0;
}

