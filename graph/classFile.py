class c:
	_p = 200
	def __init__(self):
		self._p = 100
	def method(self):
		c._p+=2+self._p

	@staticmethod
	def method2():
		print(c._p)

obj1 = c()
obj1.method()
c.method2()