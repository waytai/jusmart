import os
f = lambda x:x if x.endswith('.py') and os.path.exists(x) else None 
x = os.path.abspath('')
file_path = os.path.join(x,'hao.py')
print f(file_path)
