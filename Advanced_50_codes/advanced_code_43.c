#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 43;
    head->next = NULL;
    printf("Advanced Linked List Example: %d\n", head->data);
    free(head);
    return 0;
}
