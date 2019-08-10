import queue
import collections


class Graph(object):

        def dfsUtil(self, v, visited):
                visited[v] = True
                print(v)
                for i in sorted(self.adjList[v]):
                        if visited[i] == False:
                                self.dfsUtil(i,visited)

        def dfs(self, startnode):
                visited = [False] * self.size
                visited[startnode] = True
                print(startnode)

                for i in range(self.size):
                        if visited[i] == False:
                                self.dfsUtil(i,visited)

        def __init__(self,size):
            self.size = size
            self.adjList = {}
            self.level = [0 for i in range(self.size)]
            for i in range(size):
                self.adjList[i] = set()

        def add_edge(self, i, j):
            if i == j:
                pass
            else:
                self.adjList[i].add(j)
                self.adjList[j].add(i)

        def removeEdge(self,i,j):
            if j not in self.adjList[i]:
                pass
            else:
                self.adjList[i].discard(j)
                self.adjList[j].discard(i)

        def isEdge(self,i,j):
            return True if i in self.adjList[j] else False

        def show(self):
            for i,j in self.adjList.items():
                print(i,':',j)


        def bfs(self, startnode):
            visited = [False for i in range(self.size)]
            q = queue.Queue()
            self.level[startnode] = 0
            q.put(startnode)
            visited[startnode] = True
            print(startnode)

            while not q.empty():
                v = q.get()
                for i in self.adjList[v]:
                    if visited[i] != True:
                        print(i)
                        self.level[i] = self.level[v]+1
                        visited[i] = True
                        q.put(i)



#recursive approach will better explain the order
#iterative approach little differ from the actual op
        def dfs_stack(self, start):
            visited = [False] * self.size
            s = queue.LifoQueue()
            s.put(start)
            visited[start] = True
            print(start)
            while not s.empty():
                v = s.get()

                if not visited[v]:
                    visited[v] = True
                    print(v)

                for i in self.adjList[v]:
                    if visited[i] == False:
                        s.put(i)



def main():
	graph = Graph(5)
	graph.add_edge(0, 1)
	graph.add_edge(0, 2)
	graph.add_edge(0, 1)
	graph.add_edge(0, 2)
	graph.add_edge(1, 4)
	graph.add_edge(1, 3)
	graph.add_edge(1, 4)
	graph.show()
	graph.dfs(0)
	graph.dfs_stack(0)
	# print()
	# #graph.removeEdge(3,4)
	# print()
	# graph.show()
	# print()
	# if graph.isEdge(3,4):
	# 	print("wow")
	# else:
	# 	print("not found edge")


if __name__ == '__main__':
	main()
