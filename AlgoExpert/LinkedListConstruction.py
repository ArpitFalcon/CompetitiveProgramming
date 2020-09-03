class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # O(1) time | O(1) space
    def setHead(self, node):
        if self.head is None:
            self.head = node
            self.tail = node
            return
        self.insertBefore(self.head, node)

    # O(1) time | O(1) space
    def setTail(self, node):
        if self.tail is None:
            self.setHead(node)
            return
        self.insertAfter(self.tail, node)

    # O(1) time | O(1) space
    def insertBefore(self, node, nodeToInsert):
        # If there is only one node then there is nothing to insert.
        if nodeToInsert == self.head and nodeToInsert == self.tail:
            return
        # If the node is in our linked list, remove it.
        # For the case of transitioning a node to another postion.
        self.remove(nodeToInsert)
        # Update the bindings of the node.
        nodeToInsert.prev = node.prev
        nodeToInsert.next = node
        # Update the bindings of surrounding node.\
        # Case for the head.
        if node.prev is None:
            self.head = nodeToInsert
        else:
            node.prev.next = nodeToInsert
        node.prev = nodeToInsert

    # O(1) time | O(1) space
    def insertAfter(self, node, nodeToInsert):
        if nodeToInsert == self.head and nodeToInsert == self.tail:
            return
        self.remove(nodeToInsert)
        nodeToInsert = node
        nodeToInsert.next = node.next
        if node.next is None:
            self.tail = nodeToInsert
        else:
            node.next.prev = nodeToInsert
        node.next = nodeToInsert

    # O(p) time | O(1) space
    def insertAtPosition(self, position, nodeToInsert):
        # Insert at head.
        if position == 1:
            self.setHead(nodeToInsert)
            return
        # If not head, traverse
        node = self.head
        currentPosition = 1
        while node is not None and currentPosition != position:
            node = node.next
            currentPosition += 1
        # If it is not the end of the linked list(tail).
        if node is not None:
            self.insertBefore(node, nodeToInsert)
        else:
            self.setTail(nodeToInsert)

    # O(n) time | O(1) space
    def removeNodesWithValue(self, value):
        node = self.head
        # Traverse the linked list
        # Remove all nodes with that value
        while node is not None:
            nodeToRemove = node
            node = node.next
            if nodeToRemove.value == value:
                self.remove(nodeToRemove)

    # O(1) time | O(1) space
    def remove(self, node):
        # Check for HEAD
        if node == self.head:
            self.head = self.head.next

        # Check for tail
        if node == self.tail:
            self.tail = self.tail.prev

        # Remove the bindings (next and prev) properly
        self.removeNodeBindings(node)

    # O(n) time | O(1) space
    def containsNodeWithValue(self, value):
        node = self.head
        # Traverse the linked list to find the node with the value
        while node is not None and node.value != value:
            node = node.next
        # Return True if node is not none (found).
        return node is not None

    # Helper function to remove the bindings.
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
