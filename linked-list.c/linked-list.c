// linked list 에 사용됄 node

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void print(int v) {
    printf("%d\n", v);
}

int main() {
    Node* a = malloc(sizeof(Node));
    Node* b = malloc(sizeof(Node));
    Node* c = malloc(sizeof(Node));
    Node* d = malloc(sizeof(Node));

    a->data = 1;
    a->next = b;

    b->data = 2;
    b->next = c;
    
    c->data = 3;
    c->next = d;

    d->data = 4;
    d->next = NULL;

    Node *head = a;
    Node *tail = d;

    // 1 2 3 4
    for (;;) {
        print(head->data);
        
        if (tail == head) {
            head = a;
            break;
        }

        head = head->next;
    }
    
    a->next = c;

    // 1 3 4
    for (;;) {
        print(head->data);
        
        if (tail == head) {
            head = a;
            break;
        }

        head = head->next;
    }

    free(a);
    free(b);
    free(c);
    free(d);
}
