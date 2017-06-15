# Hash maps. Add, delete and get in O(1).
class HashMap:

    def __init__(self, size=6):
        self.size = size
        self.map = [None] * self.size

    # Computes the hash by adding ascii value of chars and moding by size of map
    def _get_hash(self, key):
        hash = 0

        for char in key:
            hash += ord(char)

        return hash % self.size

    def add(self, key, value):
        key_hash = self._get_hash(key)
        key_value = [key, value]

        # Map[key_hash] is empty, so add list with pair key and value.
        if self.map[key_hash] is None:
            self.map[key_hash] = [key_value]

        # There is already a key_value added.
        else:
            # If key is already added, update value.
            for pair in self.map[key_hash]:
                if pair[0] == key:
                    pair[1] = value
                    return True

            # If key is not added, add key and value
            self.map[key_hash].append(key_value)

        return True

    def get(self, key):
        key_hash = self._get_hash(key)

        if self.map[key_hash] is not None:
            for pair in self.map[key_hash]:
                if pair[0] == key:
                    return pair[1]

        return None

    def delete(self, key):
        key_hash = self._get_hash(key)

        for i in range(0, len(self.map[key_hash])):
            if self.map[key_hash][i][0] == key:
                del self.map[key_hash][i]
                return True

        return False

    def print_it(self):
        for item in self.map:
            if item is not None:
                print(str(item))

h = HashMap()
h.add('Bob', '567-8888')
h.add('Ming', '239-6753')
h.add('Ming', '333-8233')
h.add('Ankit', '293-8625')
h.add('Aditya', '852-6551')
h.add('Alicia', '632-4123')
h.add('Mike', '567-2188')
h.add('Aditya', '777-8888')
h.print_it()
h.delete('Bob')
h.print_it()
print('Ming: ' + h.get('Ming'))
