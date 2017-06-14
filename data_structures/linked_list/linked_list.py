class Node(object):

    def __init__(self, data, next_node=None):
        self.data = data
        self.next_node = next_node

    def get_next_node(self):
        return self.next_node

    def get_data(self):
        return self.data

    def set_next_node(self, next_node):
        self.next_node = next_node

    def set_data(self, data):
        self.data = data


class LinkedList(object):

    # Constructor, receives just de root node and sets size as 0
    def __init__(self, root=None):
        self.root = root
        self.size = 0

    # Returns the size
    def get_size(self):
        return self.size

    # Finds data
    def find(self, data):
        current = self.root

        while current:
            if current.get_data() == data:
                return True

        return False

    '''
    Create new node with data, points new_node to root, turns new_node into
    root.
    '''
    def add(self, data):
        new_node = Node(data, self.root)
        self.root = new_node
        self.size += 1

    def remove(self, data):
        previous = None
        current = self.root

        while current:
            if current.get_data() == data:
                if previous:
                    previous.set_next_node(current.get_next_node())
                else:
                    self.root = current.get_next_node()
                return True
            else:
                previous = current
                current = current.get_next_node()

        return False
