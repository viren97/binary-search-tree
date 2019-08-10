class Graph(object):
	def __init__(self, size):
		self.adjMatx = []
		for i in range(size):
			self.adjMatx.append([0 for i in range(size)])
		self.size = size 

	def addEdge(self,i,j): 
		if i==j:
			pass
		else:
			self.adjMatx[i][j] = 1
			self.adjMatx[j][i] = 1
	def removeEdge(self,i,J):
		if self.adjMatx[i][j] == 0:
			print("no edge in between %d and %d" %(i,j))

		self.adjMatx[i][j] = 0
		self.adjMatx[i][j] = 0

	def isEdge(self, i,j):
		return True if self.adjMatx[i][j] else False

	def toString(self):
		for row in self.adjMatx:
			for col in row:
				print('{:4}'.format(col), end='')
			print()

def main():

    g = Graph(5)
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)

    g.toString()

if __name__ == '__main__':
	main()


