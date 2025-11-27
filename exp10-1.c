#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node n1, n2, n3;

    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = &n3;

    n3.data = 30;
    n3.next = NULL;

    // printing
    struct Node *temp = &n1;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
