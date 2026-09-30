<h2>Definition</h2><br>
According to DR SHALIGRAM PRAJAPAT sir, <br>
<i> A Queue is the organisation of data items in majorly FIFO manner, where elements are inserted in one end known as REAR (tail) and removed from another end called FRONT (head).</i><br>
<b> QUEUE is therefore used to store data that needs to be processed in the order of its arrival</b>.<br>
<h2>Kendall's notation</h2><br>
A/S/c/K/N/D<br>
arrival distribution/service time distribution/number of server/capacity of queue/size of calling population/queueing pattern(LIFO, FIFO)<br>
<h2>Operations</h2>
<b>ENQUEUE</b>
  <pre>for fixed front 
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
Step 7: End</pre>
<b>DEQUEUE</b>
<pre>for fixed front
  Step 1: Start
Step 2: Check for Underflow. 
        If (rear == -1), then print "Underflow" and exit.
Step 3: Access or store the deleted element (element = arr[0]).
Step 4: Shift all remaining elements to the left:
        Loop for i from 0 to (rear - 1):
            Set arr[i] = arr[i + 1]
Step 5: Decrement the rear pointer (rear = rear - 1) because one slot opened up.
Step 6: End<hr>
  non fixed front
  Step 1: Start
Step 2: Check for Underflow. 
        If (front == -1), then print "Underflow" and exit.
Step 3: Access or store the deleted element (element = arr[front]).
Step 4: Check if this was the last remaining element in the queue.
        If (front == rear), then reset the queue to empty:
            a. Set front = -1
            b. Set rear = -1
Step 5: Otherwise (normal case).
        Increment front by 1 (front = front + 1).
Step 6: End<hr>
  for circular queue
  Step 1: Start
Step 2: Check for Underflow. 
        If (front == -1), then print "Underflow" and exit.
Step 3: Access or store the deleted element (element = arr[front]).
Step 4: Check if this was the last remaining element in the queue.
        If (front == rear), then reset the queue to empty:
            a. Set front = -1
            b. Set rear = -1
Step 5: Otherwise, check if front has reached the end of the physical array.
        If (front == capacity - 1), then:
            a. Set front = 0 (wrap around)
Step 6: Otherwise (normal case).
        Increment front by 1 (front = front + 1).
Step 7: End</pre>
<b>PEEK_FRONT</b>
<pre> for fixed front
  Step 1: Start
Step 2: Check for Underflow.
        If (rear == -1), then print "Queue is empty / Underflow" and exit.
Step 3: Return or print the element at index 0 (element = arr[0]).
Step 4: End
<hr>
<b>isEmpty</b>
<b>isFull</b>
<b>display</b</pre>
