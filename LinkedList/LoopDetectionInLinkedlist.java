public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode s=head;
        ListNode f=head;
        while(f!=null&&f.next!=null)
        {
            s=s.next; //slow pointer jump one step at a time
            f=f.next.next; //fast pointer jump two step at a time
            if(s==f) return true; //at some point both slow and fast meet each other if loop is present ,so return true
        }
        return false;
    }
}
