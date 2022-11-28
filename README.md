# bug-classes-project
Practice creating classes via separate header files for 10A HW 7.

Please turn in bug.h and bug.cpp that contains your implementation of the Bug class. I
provided starter code bug.h and bug.cpp. I also provided bug main.cpp, which contains
the main function and testers. You should not modify bug main.cpp.
<br>
<br>
• In bug.h, you need to provide the class definition
<br>
• In bug.cpp you need to provide implementations of the member functions.
<br>
• For bug main.cpp, you will not edit this, but you will run this and it will test your
implementation.
<br>
<br>
Please pass all tests before submitting your bug.h and bug.cpp.
Write a class Bug that models a bug moving along a horizontal line. The bug moves either
to the right or left. Initially, the bug moves to the right, but it can turn to flip its
direction (if the current direction is right, turn to left; if the current direction is left, turn to
right). In each move, its position changes by one unit in the current direction.
<br>
<br>
Provide a constructor
<br>
<br>
Bug(int initial_position)
<br>
<br>
and member functions
<br>
<br>
void turn()
<br>
<br>
void move()
<br>
<br>
int get_position() const
<br>
<br>
• Note: There will be no user input. Just run the bug main.cpp and check your answers.
