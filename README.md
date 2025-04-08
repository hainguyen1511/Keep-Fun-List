# Keep Fun List
* Creating a struct or class to keep track of an individual activity.
* The most important part is to create a Class (e.g., Fun_Activities) that keeps an array (dynamically allocated) of all of the activities someone wants to do.

> [!IMPORTANT]
> Each activity should have the following information:
1. The name of the activity (e.g., Wind Surfing)
2. The location where it takes place (e.g., Gorge)
3. The level of difficult (1-10, where 10 is extreme)
4. Recommendations (e.g., what to take or equipment needed)
5. Add one other feature that you would want to keep track of

> [!IMPORTANT]
> The class must support the following public member functions:
1. Constructor – to initialize the data members
2. Destructor – to deallocate (release) the dynamic memory used by the class and reset the data members
3. New_Activity – to add a new activity from the user and store it in the array of activities, if there is room available in the array
4. Display – to display all of the items in the array of activities
5. Display only items that have a certain level of difficulty passed in as an argument

> [!IMPORTANT]
> You will need three data members in your class:
1. a pointer to the activity struct or class (so that a dynamically allocated array can be created),
2. the size of the array once it is allocated and
3. the number of items actually stored in the array.

> [!CAUTION]
> As you get started, perform the tasks in this order:
Task 1. Begin by creating an Activity struct or class that will hold just one activity. Experiment with one of the fields in the struct or class being a dynamically allocated array. Test this out and get it to work before proceeding.

> [!CAUTION]
> Task 2. Next, create a .h file for the Fun_Activities class with stubs for each of the member functions (i.e., functions without bodies must like you experience in lab).
There should be one .h file and two .cpp files

• The .h file should contain #includes, constants, structs, prototypes, and a class interface

• Main.cpp – This should contain main and any menu functions that you may want to have

• Activities.cpp – This should start by containing stub functions (just the header of the member functions with {} for the body) for each of the member functions you will be implementing.

> [!CAUTION]
> Task 3. Start implementing these functions:
• Constructor
• Destructor
• New Activity to add a new item and store it in the array
• Display all items

> [!CAUTION]
> Task 4. Now let’s add the Display only items of a certain level of difficulty
