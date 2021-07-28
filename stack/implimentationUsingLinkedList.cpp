/* class LinkList
{
  public int data; // data item
  public LinkList next; // next link in list
  public LinkList(int dd) // constructor
  { data = dd; }
} The LinkList class is given as above
*/
class LinkStack{
  LinkList *first; // ref to first item on list
  public:
    LinkStack(){
        first = NULL;
    }
    bool isEmpty(){
      return first == NULL;
    }
    void push(int dd){
		if(isEmpty()){
          first = new LinkList(dd);
        }
      else{
        LinkList* temp = first;
        while(temp->next != NULL){
          temp=temp->next;
        }
        temp->next = new LinkList(dd);
      }
    }
    int pop(){
		if(isEmpty()){
          return -1;
        } else{
          if(first->next == NULL){
            int res = first->data;
            first = NULL;
            return res;
          }
          LinkList* temp = first;
          while(temp->next->next != NULL){
            temp = temp->next;
          }
          int res = temp->next->data;
          temp->next = NULL;
          return res;
        }
    }
};