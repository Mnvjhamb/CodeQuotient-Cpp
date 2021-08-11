#include <vector>
class Heap{
  private:
    vector<int> list;
  	int length;
  public:
  Heap(){
    length = 0;
  }
  void swap(int i, int j){
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
  }
 void bubbleUp(int i){
    while(list[(i-1)/2] < list[i]){
      swap((i-1)/2, i);
      bubbleUp((i-1)/2);
    } return;
  }
  void add(int n){
    list.push_back(n);
    length++;
    bubbleUp(length-1);
  }
  void bubbleDown(int i){
    if(2*i+1>=length || 2*i+2>=length || (list[i] > list[2*i+1] && list[i] > list[2*i+2])) return;
    if(list[2*i+1] > list[2*i+2]){
      swap(i, 2*i+1);
      bubbleDown(2*i+1);
    } else{
      swap(i, 2*i+2);
      bubbleDown(2*i+2);
    }
  }
  int pop(){
    swap(0, length-1);
    int removed = list.back();
    list.pop_back();
    length--;
    bubbleDown(0);
    return removed;
  }  
  void print(){
    for(int i=0; i<length; i++){
      cout<<list[i]<<" ";
    }
  }
};
void printKLargest(int array[],int n,int k){
  // Write your code here
  Heap *h = new Heap();
  for(int i=0; i<n; i++){
    h->add(array[i]);
  }
  for(int i=0; i<k; i++){
    cout<<h->pop();
    if(i<k-1) cout<<" ";
  }
}