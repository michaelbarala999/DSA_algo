package JAVA;

class Node {
    public int data;
    public Node next;

    public Node(int d) {
        data = d;
    }

}

    void printList(Node head) {
        if (head == null)
            return;
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

public class linkedList {
    public static void main(String[] args) {
      Node n1 = new Node(1);
      Node n2 = new Node(2);
      Node n3 = new Node(3);
      Node n4 = new Node(4);

    }
}
