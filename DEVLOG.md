## 2026-06-13

Made this repo to dump my basic programs into.

When making functions, even while using switch, be sure to still use return 0;


Apparently using %c isn't good for logic to restart a function. Figure out how to accept char inputs for Y/N.



Added switch logic to stream line verbose code.


When calling menu_logic(), the function is being called twice? The first two prints are going off without having the cchance to enter first scanf input. No idea why, will try to figure out. 




It was a whitespace issue, i put a space in " %c" or w/e specifier it was. The calculator needs loop logic, as of now I can input two more digits but then the program exits. I'll need to change again from float to int to avoid any possile errors.

## 2026-06-15

Late devlog entry as I had to clone git due to local corruption:

For continuous logic, think modular and switch. Switch case for operators including =, within a loop of some kind, 
only breaking when = is used to make an answer, then after answer, hold current number in program unless cleared. 

Have a dedicated "off" button to shut down the program, analogous to a power button.

Make sure the inputs can replace current operator logic without losing progress in what numbers are inserted.


Loop modules: Operators/Numbers.

Number Loop: condition where it interacts with operator loop and vice versa -- two loops that can cycle between each other without breaking out of the overall loop, using conditionals to call each other.

Essentially I want it to only exit if you hit the power off "button", or a clear command.


## 2026-06-15

Late devlog entry as I had to clone git due to local corruption:

For continuous logic, think modular and switch. Switch case for operators including =, within a loop of some kind, 
only breaking when = is used to make an answer, then after answer, hold current number in program unless cleared. 

Have a dedicated "off" button to shut down the program, analogous to a power button.

Make sure the inputs can replace current operator logic without losing progress in what numbers are inserted.


Loop modules: Operators/Numbers.

Number Loop: condition where it interacts with operator loop and vice versa -- two loops that can cycle between each other without breaking out of the overall loop, using conditionals to call each other.

Essentially I want it to only exit if you hit the power off "button", or a clear command.

// Part 2

debug prints should always end with \n. 

for scanf("%c", &operator) has no leading space, the whitespace trap again.  Use scanf(" %c", &operator);

// Part 3

I have decided to write more basic while loops before I touch on this calculator idea again. My function tossing isn't going to work well.


## 2026-06-16

Moved old calc files into /old. Making basic while loop programs in c-basic for now. 


## 2026-06-17

Early morning session before work. Did prototype code to figure out functions calling functions and basic loop functionality. Will need to work on ways to break loops with a power off 'button' and a way to clear and to do all operations.

PART 2:

Evening session. Invovled while(1) but it isn't working - not looping through code at all. I'll hopefully figure it out tomorrow morning.


## 2026-06-18

C is just harder than Python. I made while.c to play around with while loops and I think I know what i'm doing now; i'll work on the calculator after work today.
