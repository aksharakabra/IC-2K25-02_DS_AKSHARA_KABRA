<h2>Definition</h2><br>
According to DR SHALIGRAM PRAJAPAT sir, <br>
<i> A Queue is the organisation of data items in majorly FIFO manner, where elements are inserted in one end known as REAR (tail) and removed from another end called FRONT (head).</i><br>
<b> QUEUE is therefore used to store data that needs to be processed in the order of its arrival</b>.<br>
<h2>Kendall's notation</h2><br>
A/S/c/K/N/D<br>
arrival distribution/service time distribution/number of server/capacity of queue/size of calling population/queueing pattern(LIFO, FIFO)<br>
<h2>Operations</h2>
<pre><b>enqueue</b>
  for fixed front 
  Step 1: Start
Step 2: Check for Overflow. 
        If (rear == capacity - 1), then print "Overflow" and exit.
Step 3: Increment the rear pointer by 1 (rear = rear + 1).
Step 4: Insert the element at the rear position (arr[rear] = element).
Step 5: End<hr>
  for non fixed front
  Step 1: Start
Step 2: Check for Overflow. 
        If (rear == capacity - 1), then print "Overflow/Queue Full" and exit.
Step 3: Check if the queue is empty.
        If (front == -1), then set front = 0 (first element being inserted).
Step 4: Increment the rear pointer by 1 (rear = rear + 1).
Step 5: Insert the element at the rear position (arr[rear] = element).
Step 6: End<hr>
 for circular 
  Step 1: Start
Step 2: Check for Overflow.
        If ((rear + 1) % capacity == front), then print "Overflow" and exit.
Step 3: Check if the queue is completely empty.
        If (front == -1 and rear == -1), then:
            a. Set front = 0
            b. Set rear = 0
Step 4: Otherwise, check if rear has reached the end of the array but front spaces are free.
        If (rear == capacity - 1 and front != 0), then:
            a. Set rear = 0 (wrap around)
Step 5: Otherwise (normal case).
        Increment rear by 1 (rear = rear + 1).
Step 6: Insert the element at the current rear position (arr[rear] = element).
Step 7: End<hr>
<b>dequeue</b>
<b>peek_front</b>
<b>isEmpty</b>
<b>isFull</b>
<b>display</b</pre>
