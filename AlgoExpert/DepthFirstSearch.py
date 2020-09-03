class Node:
    def __init__(self, name):
        self.children = []
        self.name = name
    
    def addChild(self, child):
        self.children.append(Node(child))
    

    # O(v + e) time / O(v) space
    def depthFirstSearch(self, array):
        array.append(self.name)

        for child in self.children:
            child.depthFirstSearch(array)

        return array