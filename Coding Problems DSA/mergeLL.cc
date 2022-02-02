Node *mergeLinkedList(Node *h1,Node *h2){
	if(h1 == NULL) return h2;
	if(h2 == NULL) return h1;

	Node *temp;
	if(h1->data <= h2->data){
		temp = h1;
		temp->next = mergeLinkedList(h1->next,h2);
	}
	else{
		temp = h2;
		temp->next = mergeLinkedList(h1,h2->next);
	}
	return temp;
}