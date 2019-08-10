class Graph(object):
    def __init__(self,size):
        self.size = size
        self.adjList = {}
        for i in range(size):
            self.adjList[i] = []
            
    def addEdge(self,i,j):
        self.adjList[i].append(j)
        self.adjList[j].append(i)
        
    def isEdge(self,i,j):
        return True if i in self.adjList[j] else False
            


def main():
    n, m = [int(i) for i in input().split()]
    graph = Graph(n)
    for i in range(m):
        a,b = map(int, input().split())
        graph.addEdge(a,b)
        
    q = int(input())
    for i in range(q):
        a,b = map(int, input().split())
        if graph.isEdge(a,b):
            print('YES')
        else:
            print('NO')
        

if __name__ == '__main__':
    main()