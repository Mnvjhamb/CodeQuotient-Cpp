int checkPalindrome(struct Node* head) 
{
  string s1="";
  int n=0;
  while(head!=NULL){
    s1+=head->data;
    n+=1;
    head=head->next;
  }
  if(n==0) return 0;
  string s2="";
  for(int i=n-1; i>=0; i--){
    s2+=s1[i];
  }
  if(s1.compare(s2) == 0){
    return 1;
  } else{
    return 0;
  }
}