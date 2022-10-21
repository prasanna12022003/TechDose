bool isPalindrome(struct ListNode* head){
    int count  = 0;
    struct ListNode* temp = head;
    
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    int j = 0;
    int* arr = malloc(sizeof(int)*count);
     while(temp != NULL){
        arr[j++] = temp->val;
        temp = temp->next;
    }
    int i = 0;
    while(i < count-i-1){
        if(arr[i] != arr[count-i-1]){
            return false;
        }
        i++;
    }
    return true;
}