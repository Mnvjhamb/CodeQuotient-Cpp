/* struct Node
{
    int data;
    struct Node *next;
  	struct Node *prev;
};
Above structure is used to define the linked list, You have to complete the below functions only */
void swapNodes(Node** head, int x, int y)
{
    if (x == y) return;
    // Search for x (keep track of prevX and CurrX
    Node *prevX = NULL, *currX = *head;
    while (currX && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }
    // Search for y (keep track of prevY and CurrY
    Node *prevY = NULL, *currY = *head;
    while (currY && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }
    // If either x or y is not present, nothing to do
    if (currX == NULL || currY == NULL)
        return;
    // If x is not head of linked list
    if (prevX != NULL)
        prevX->next = currY;
    else // Else make y as new head
        *head = currY;
    // If y is not head of linked list
    if (prevY != NULL)
        prevY->next = currX;
    else // Else make x as new head
        *head = currX;
    // Swap next pointers
    Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}