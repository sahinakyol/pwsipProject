**PWSIP Advanced Software Engineering Lesson**

I used two type algorithm Bubble Sort and Insertion Sort.

Requirements of the project are ;

30 names must pulling from any text file,

They are must sorting by Ascending and Descending.

**Bubble Sorting**

Step-by-step example

Let us take the array of numbers "5 1 4 2 8", and sort the array from lowest number to greatest number using bubble sort. In each step, elements written in bold are being compared. Three passes will be required.

First Pass

( **5** **1** 4 2 8 ) → ( **1** **5** 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.

( 1 **5** **4** 2 8 ) → ( 1 **4** **5** 2 8 ), Swap since 5 > 4

( 1 4 **5** **2** 8 ) → ( 1 4 **2** **5** 8 ), Swap since 5 > 2

( 1 4 2 **5** **8** ) → ( 1 4 2 **5** **8** ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass

( **1** **4** 2 5 8 ) → ( **1** **4** 2 5 8 )

( 1 **4** **2** 5 8 ) → ( 1 **2** **4** 5 8 ), Swap since 4 > 2

( 1 2 **4** **5** 8 ) → ( 1 2 **4** **5** 8 )

( 1 2 4 **5** **8** ) → ( 1 2 4 **5** **8** )

Now, the array is already sorted, but the algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass

( **1** **2** 4 5 8 ) → ( **1** **2** 4 5 8 )

( 1 **2** **4** 5 8 ) → ( 1 **2** **4** 5 8 )

( 1 2 **4** **5** 8 ) → ( 1 2 **4** **5** 8 )

( 1 2 4 **5** **8** ) → ( 1 2 4 **5** **8** )


**Insertion Sort**

Example: The following table shows the steps for sorting the sequence {3, 7, 4, 9, 5, 2, 6, 1}. In each step, the key under consideration is underlined. The key that was moved (or left in place because it was biggest yet considered) in the previous step is shown in bold.

__3__ 7 4 9 5 2 6 1

**3** __7__ 4 9 5 2 6 1

3 **7** __4__ 9 5 2 6 1

3 **4** 7 __9__ 5 2 6 1

3 4 7 **9** __5__ 2 6 1

3 4 **5** 7 9 __2__ 6 1

**2** 3 4 5 7 9 __6__ 1

2 3 4 5 **6** 7 9 __1__

**1** 2 3 4 5 6 7 9

**Complexities**

Insertion : Worst-case performance 	O(n^2)
			Best-case performance 	O(n)

Bubble	  : Worst-case performance 	O(n^2)
			Best-case performance 	O(n)

![alt text](https://www.cs.duke.edu/courses/fall03/cps182s/latex/bubbleplot.jpg)

*References*

[Bubble Sort](https://en.wikipedia.org/wiki/Bubble_sort)

[Insertion Sort](https://en.wikipedia.org/wiki/Insertion_sort)

[Random Names](http://listofrandomnames.com/)
