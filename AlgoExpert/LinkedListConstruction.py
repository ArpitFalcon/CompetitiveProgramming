class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    
    def setHead(self, node):

    def setTail(self, node):

    def insertBefore(self, node, nodeToInsert):

    def insertAfter(self, node, nodeToInsert):
    
    def insertAtPosition(self, position, nodeToInsert):
    
    def removeNodesWithValue(self, value):
        node = self.head
        while node is not None:
            nodeToRemove = node
            node = node.next
            if nodeToRemove.value == value:
                self.remove(nodeToRemove)


    def remove(self, node):
        if node == self.head:
            self.head = self.head.next
        if node == self.tail:
            self.tail = self.tail.prev
        self.removeNodeBindings(node)
    

    def containsNodeWithValue(self, value):
        node = self.head
        while node is not None and node.value != value:
            node = node.next
        return node is not None


    def removeNodeBindings(self, node):
        if node.prev is not None:
            node.prev.next = node.next
        if node.next is not None:
            node.next.prev = node.prev
        node.prev = None
        node.next = None