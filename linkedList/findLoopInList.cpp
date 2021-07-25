#include <vector>
int search(vector<int> li, int n){
  for(int i=0; i<li.size(); i++){
    if(li.at(i) == n) return i;
  }
  return -1;
}

int  loopInList(Node* head) {
  // Write your code here
  if(head == NULL) return 0;
  vector<int> li;
  Node* temp = head;
  int ind=search(li, temp->data);
  while(ind == -1){
    li.push_back(temp->data);
    if(temp->next){
      temp = temp->next;
      ind = search(li, temp->data);
    } else{
      return 0;
    }
    
  }
  return li.size() - ind;
}