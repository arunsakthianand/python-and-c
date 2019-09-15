import numpy as np
import matplotlib.pyplot as plt
import math as m

def line_gen(A,B):
  len =10
  x_AB = np.zeros((2,len))
  lam_1 = np.linspace(0,1,len)
  for i in range(len):
    temp1 = A + lam_1[i]*(B-A)
    x_AB[:,i]= temp1.T
  return x_AB



theFile = open("ptc.dat","r")
theInts = []
for val in theFile.read().split():
	theInts.append(int(val))
theFile.close()


O = np.array([0,0])
P = np.array([0.6,-0.2])

plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 + 0.1), O[1] * (1 - 0.1) , 'O')
plt.plot(P[0], P[1], 'o')
plt.text(P[0] * (1 - 0.2), P[1] * (1) , 'P')

x_OP = line_gen(O,P)
plt.plot(x_OP[0,:],x_OP[1,:],label='$OP$')

plt.xlabel('$x$')
plt.ylabel('$y$')
plt.legend(loc='upper right')
plt.grid() # minor
plt.axis('equal')
plt.show()
