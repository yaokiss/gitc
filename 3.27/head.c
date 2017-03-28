#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Books{
  struct Books *next;
  int book_id;
}node;

int insert(struct Books *head, int val);
int ainsert(struct Books * a, int val, int id);
void show(struct Books *head);
int delete(struct Books * d, int val);

int main(){
  struct Books head;
  struct Books *p2;

  p2 = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(&head,101);
  insert(&head,102);
  insert(&head,103);
  insert(&head,104);
  insert(&head,105);
  insert(&head,106);
  ainsert(&head,100,1234567890);
  show(&head);
  printf("_________________________\n");
  delete(&head,1234567890);
  show(&head);
  return 0;
}
int insert(struct Books * p1,int val){
  struct Books * p = NULL;
  p = malloc(sizeof(struct Books));
  if(NULL == p){
    printf("error for malloc!\n");
    return -1;
  }
  p->book_id = val;
  p->next = NULL;

  while((p1 -> next) != NULL){
    p1 = p1 -> next;
  }
  p1 -> next = p;
  return 0;
}
int  ainsert(struct Books * a, int val, int id){
  struct Books * a5 = NULL;
  a5 = malloc(sizeof(struct Books));
  if(a == NULL){
      printf("error for malloc!");
      return -1;
    }
  while(a != NULL){
    if(a -> book_id == val){
      a5 -> next = a -> next;
      a -> next = a5;
      a5 -> book_id = id;
      break;
    }

    a = a -> next;
  }
  return 0;
}

int delete(struct Books * d, int val){
  struct Books * tmp = NULL;
  while (d != NULL){
    if ((d -> next) -> book_id == val){
      tmp = d -> next;
      d -> next = (d -> next) -> next;
      free(tmp);
      break;
    }
    d = d -> next;
  }
  return 0;
}




void show(struct Books *head){
  while((head /*-> next*/) != NULL){
    //printf("head=%p\n head->next=%p\n",head, head->next);

    printf("head->id = %d\n",head -> book_id);
    head = head -> next;
  }
}
