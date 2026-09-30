<h2>Definition</h2><br>
According to DR SHALIGRAM PRAJAPAT sir, <br>
<i> A Stack is the organisation of data items in LIFO manner, where elements are inserted in one end and removed from the same end called TOP.</i><br>
<h2>RIVISION FOR DOUBLE STACK</h2>
<table><tr><th>OPERATION</th><th>STACK1</th><th>STACK2</th></tr>
<tr><td>initialization</td><td>top1=-1</td><td>top2=max</td></tr>
<tr><td>empty</td><td>top1==-1</td><td>top2==max</td></tr>
<tr><td>full</td><td>top1+1==top2</td><td>top2-1==top1</td></tr>
<tr><td>push</td><td>top++<br> x=arr[top1]</td><td>top2-- <br> x=arr[top2]</td></tr>
<tr><td>pop</td><td>top--</td><td>top2++</td></tr>

</table>
