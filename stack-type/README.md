<h2>Definition</h2><br>
According to DR SHALIGRAM PRAJAPAT sir, <br>
<i> A Stack is the organisation of data items in LIFO manner, where elements are inserted in one end and removed from the same end called TOP.</i><br>
<h2>Operation on stack</h2>
<pre>Declare(making of class-private)
Initialization(constructor)..top=-1 or s[0]=-1
IsEMPTY...top==-1
IsFull...top==max-1
push...arr[++top]=x
pop...top--
display(by loop)... for(int i=0; i<=top1; i++){arr[i]}
</pre>
        
<h2>RIVISION FOR DOUBLE STACK</h2>
<table><tr><th>OPERATION</th><th>STACK1</th><th>STACK2</th></tr>
<tr><td>initialization</td><td>top1=-1</td><td>top2=max</td></tr>
<tr><td>empty</td><td>top1==-1</td><td>top2==max</td></tr>
<tr><td>full</td><td>top1+1==top2</td><td>top2-1==top1</td></tr>
<tr><td>push</td><td>top++<br> x=arr[top1]</td><td>top2-- <br> x=arr[top2]</td></tr>
<tr><td>pop</td><td>top--</td><td>top2++</td></tr>
<tr><td>display</td><td>for(int i=0; i<=top1; i++)<br>{cout<<arr[i]<<" ";}</td><td>for(int j=top2; j<capacity; j++)<br>{cout<<arr[j]<<" ";}</td></tr>
</table>
