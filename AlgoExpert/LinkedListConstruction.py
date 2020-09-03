class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    

    def setHead(self, node):

    def setTail(self, node):


    def insertBefore(self, node, nodeToInsert):
        # If there is only one node 
        if nodeToInsert == self.head and nodeToInsert == self.tail:
            return
        self.remove(nodeToInsert)
        nodeToInsert.prev = node.prev
        nodeToInsert.next = node
        if node.prev is None:
            self.head = nodeToInsert
        else:
            node.prev.next = nodeToInsert


    def insertAfter(self, node, nodeToInsert):
    
    def insertAtPosition(self, position, nodeToInsert):
    
    def removeNodesWithValue(self, value):
        node = self.head
        # Traverse the linked list
        # Remove all nodes with that value
        while node is not None:
            nodeToRemove = node
            node = node.next
            if nodeToRemove.value == value:
                self.remove(nodeToRemove)


    def remove(self, node):
        # Check for HEAD
        if node == self.head:
            self.head = self.head.next

        # Check for tail
        if node == self.tail:
            self.tail = self.tail.prev
        
        # Remove the bindings (next and prev) properly
        self.removeNodeBindings(node)
    

    def containsNodeWithValue(self, value):
        node = self.head
        # Traverse the linked list to find the node with the value
        while node is not None and node.value != value:
            node = node.next
        # Return True if node is not none (found).
        return node is not None


    def removeNodeBindings(self, node):
        # Check for head node.
        if node.prev is not None:
            node.prev.next = node.next
        # Check for tail node.
        if node.next is not None:
            node.next.prev = node.prev
        # Removing the bindings.
        node.prev = None
        node.next = None