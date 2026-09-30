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
  non fixed front
  Step 1: Start
Step 2: Check for Underflow.
        If (front == -1), then print "Queue is empty / Underflow" and exit.
Step 3: Return or print the element at the front index (element = arr[front]).
Step 4: End
<hr>
  cicular queue
  Step 1: Start
Step 2: Check for Underflow.
        If (front == -1), then print "Queue is empty / Underflow" and exit.
Step 3: Return or print the element at the current front index (element = arr[front]).
Step 4: End
<hr></pre>
<b>isEmpty</b>
<pre> for fixed front
  Step 1: Start
Step 2: Check the rear index condition.
        If (rear == -1), then return True (Queue is empty).
Step 3: Otherwise, return False (Queue is not empty).
Step 4: End
<hr>
  for non fixed front
  Step 1: Start
Step 2: Check the front index condition.
        If (front == -1), then return True (Queue is empty).
Step 3: Otherwise, return False (Queue is not empty).
Step 4: End
<hr>
  for circular queue
  Step 1: Start
Step 2: Check the front index condition.
        If (front == -1), then return True (Queue is empty).
Step 3: Otherwise, return False (Queue is not empty).
Step 4: End
</pre>
<b>isFull</b>
<pre> for fixed frontStep 1: Start
Step 2: If (rear == capacity - 1), then return True (Queue is full).
Step 3: Otherwise, return False.
Step 4: End
<hr>
  for non fixed front
  Step 1: Start
Step 2: If (rear == capacity - 1), then return True (Queue is full).
Step 3: Otherwise, return False.
Step 4: End
<hr>
  circular queue
  Step 1: Start
Step 2: If ((rear + 1) % capacity == front), then return True (Queue is full).
Step 3: Otherwise, return False.
Step 4: End
</pre>
<b>DISPLAY</b>
<pre> for fixed front 
Step 1: Start
Step 2: If (rear == -1), print "Queue is empty" and exit.
Step 3: Loop for i from 0 to rear:
            Print arr[i]
Step 4: End
<hr>
for non fixed front
Step 1: Start
Step 2: If (front == -1), print "Queue is empty" and exit.
Step 3: Loop for i from front to rear:
            Print arr[i]
Step 4: End
<hr>
circular queue
Step 1: Start
Step 2: If (front == -1), print "Queue is empty" and exit.
Step 3: Set temporary pointer i = front.
Step 4: Loop indefinitely:
            a. Print arr[i]
            b. If (i == rear), then break the loop (all items printed).
            c. Move to next index: i = (i + 1) % capacity.
Step 5: End
</pre>
