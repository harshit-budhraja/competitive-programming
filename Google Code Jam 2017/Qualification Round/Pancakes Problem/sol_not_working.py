# python2
def fun(string,k):
    lis=list(string)
    t=len(string)
    flip=0
    for i in range(0,t,1):
        if lis[i]=='-':
          if i+k-1>=t:
              flip="IMPOSSIBLE"
              break
          else:
              for j in range(i,i+k,1):
                  if lis[j]=='+':
                      lis[j]='-'
                  elif lis[j]=='-':
                      lis[j]='+'
              flip+=1
    return str(flip)
a=input()
for i in range(a):
    [s,r]=raw_input().rsplit()
    r=int(r)
    res=fun(s,r)
    print "Case #"+str(i+1)+": "+res

