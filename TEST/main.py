_,*O=map(str.split,open(0))
while O:
	K,A,*O=O;s=x=0
	while s<(s:=s+A.count(str(x)))>=int(K[1])*-~x:x+=1
	print(x)