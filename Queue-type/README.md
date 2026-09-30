<h2>Definition</h2><br>
According to DR SHALIGRAM PRAJAPAT sir, <br>
<i> A Queue is the organisation of data items in majorly FIFO manner, where elements are inserted in one end known as REAR (tail) and removed from another end called FRONT (head).</i><br>
<b> QUEUE is therefore used to store data that needs to be processed in the order of its arrival</b>.<br>
<h2>Kendall's notation</h2><br>
A/S/c/K/N/D<br>
arrival distribution/service time distribution/number of server/capacity of queue/size of calling population/queueing pattern(LIFO, FIFO)<br>
<h2>Operations on Queue</h2>
<pre>Declare(making of class-private)
Initialization(constructor)..front=0 and rear=-1
IsEMPTY...rear==-1 or front==-1(for non fixed front)
IsFull...rear==max-1
push...arr[++rear]=x
pop...loop for(int i=front+1; i<=rear;i++){arr[i-1]=arr[i]} and r-- or front++ (for fixed front) 
display(by loop)... for(int i=0; i<=top1; i++){arr[i]}
</pre>
