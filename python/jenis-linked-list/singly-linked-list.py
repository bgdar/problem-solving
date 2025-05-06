
typeNode = {
    "string":str,
}

class Node:
    def __init__(self,newNode):
        self.node = newNode
        self.next = None # pointer untuk menuju data berikutnya 

class SiglyLingkedList:
    def __init__(self):
        self.head = None
    
    #tambah datanya di next node
    def insert_at_and(self,data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return

        current = self.head
        while current.next:
            current = current.next
        current.next = new_node

    def display(self):
        current = self.head
        while current:
            print(current.node,end=" -> ")
            current = current.next
        print("Null")

sll = SiglyLingkedList()
sll.insert_at_and(20)
sll.insert_at_and(50)
sll.insert_at_and(10)
sll.insert_at_and("data1")
sll.insert_at_and("data2")
sll.display()
