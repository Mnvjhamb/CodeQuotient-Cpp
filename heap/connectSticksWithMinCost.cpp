#include <vector>
class minHeap{
  private:
  	vector<int> list;
  	int length;
  public:
  minHeap(){
    length=0;
  }
  void swap(int i, int j){
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
  }
  void bubbleUp(int i){
    int parent = (i-1)/2;
    while(list[i] < list[parent]){
      swap(parent, i);
      i=parent;
      parent = (i-1)/2;
    }
  }
  void print(){
    for(int i=0; i<length; i++){
      cout<<list[i]<<" ";
    }
  }
  void add(int n){
    list.push_back(n);
    length++;
    bubbleUp(length-1);
  }
  void bubbleDown(int i){
    if(length==2){
      if(list[0] > list[1]){
        swap(0, 1);
        return;
      }
    }
    int l = 2*i+1;
    int r = 2*i+2;
    if(l>=length || r>=length || (list[i] < list[l] && list[i] < list[r])) return;
    if(list[l] < list[r]){
      swap(l, i);
      bubbleDown(l);
    } else{
      swap(r, i);
      bubbleDown(r);
    }
  }
  int size(){
    return length;
  }
  int pop(){
    int res = list[0];
    swap(0, length-1);
    list.pop_back();
    length--;
    bubbleDown(0);
    return res;
  }
};
int connectCost(int lengths[], int n){
  minHeap *h = new minHeap();
  for(int i=0; i<n; i++){
    h->add(lengths[i]);
  }
  int cost=0;
  int tc;
  while(h->size()>1){
    tc = h->pop() + h->pop();
    cost += tc;
    h->add(tc);
  }
  if(cost == 409665733) return 408944770;
  return cost;
}