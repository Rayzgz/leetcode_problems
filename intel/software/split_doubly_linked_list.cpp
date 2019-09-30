void split_list() {

   // Allocate memory for new node;
   struct node *listp;
   struct node *link;
   struct node *current;
   
   listp = list;

   while(listp->next != NULL) {
      struct node *link = (struct node*) malloc(sizeof(struct node));

      link->data = listp->data;
      link->prev = NULL;
      link->next = NULL;

      // even node
      if(listp->data%2 == 0) {
         if(even == NULL) {
            // create first node
            even = link;
            even_last = link;
            listp = listp->next;
            continue;
         } else {

            // push to the end
            current = even;
            while(current->next != NULL) {
               current = current->next;
            }

            // Insert link at the end of the list
            current->next = link; 
            even_last = link;
            link->prev = current;
            listp = listp->next;
         }

         // odd
      } else {
         if(odd == NULL) {
            odd = link;
            odd_last = link;
            listp = listp->next;
            continue;
         } else {
            current = odd;

            while(current->next!= NULL) {
               current = current->next;
            }
            
            // Insert link at the end of the list
            current->next = link; 
            odd_last = link;
            link->prev = current;
            listp = listp->next;
         }
      }
   }
   
   // Lets handle the last node
   if(listp!=NULL) {
      link = (struct node*) malloc(sizeof(struct node));

      link->data = listp->data;
      link->prev = NULL;
      link->next = NULL;
        
      if(listp->data%2 == 0) {
         current = even;

         while(current->next != NULL) {
            current = current->next;
         }

         // Insert link at the end of the list
         current->next = link; 
         even_last = link;
         link->prev = current;
      } else {
         current = odd;

         while(current->next!= NULL) {
            current = current->next;
         }
         
         // Insert link at the end of the list
         current->next = link; 
         odd_last = link;
         link->prev = current;
      }

   }
}

// struct node {
//    int data;
//    struct node *prev;
//    struct node *next;
// };


// split into odd and even
// traverse:
//      if even, delete this node
//      if odd c
ListNode* split_list(ListNode* head, ListNode* even){
    ListNode* cur = head, cur_even = even;
    if(head == NULL){
        return NULL;
    }
    while(cur){
        if(cur->data % 2 == 0){
            // even
            cur_even->next = cur;
            if(cur->prev){
                cur->prev->next = cur-next;
            }
            cur_even = cur_even->next;
            cur = cur->next;
            cur_even->next = NULL;

        }
    }
}