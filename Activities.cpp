/* Name: Hai T. Nguyen
  CS162 section 8 program 4
  This program is to list out all of the activities you are going to do
  Also, this is practice tool on class, pointer, and dynamic memory allocate
*/
#include "Activities.h"
//The data members of activity are:
/*
char * name_act;
char location[30];
int level_dif;
char equip_rec[100];
char med_kit[100]; 
*/
//The data members of list are:
/*
activity * array;
int size_of_array;
int num_of_act;
*/
/* Prototypes
class activities:
void New_Activity();
void display();
bool is_match(int match_diff);
class list:
void read_all();
void display_all();
void loop_match();
*/
//This is the activity constructor and it should initialize all of the
//data members in the activity class
activity::activity()
{
    name_act = NULL;
    location[0] =  '\0';
    level_dif = NULL;
    equip_rec[0] =  '\0';
    med_kit[0] =  '\0';
}
//Write the code to deallocate the dynamic memory in a destructor
activity::~activity()
{
    if (NULL != name_act)//reset array back to NULL if loop in main
        delete [] name_act;
    name_act = NULL;
    if (NULL != level_dif)
        delete [] level_dif;
    level_dif = NULL;
}
//Entered desired number of activities. Then, point them to it
list::list()
{
    cout << "Number of activities would you like to list out: ";
    cin >> size_of_array;
    cin.ignore(100, '\n');
    array = new activity[size_of_array];
    num_of_act = 0;
}
//Destructor will deallocate the dynamic memory
list::~list()
{
    if (NULL != array)
        delete [] array;
    array = 0;
    size_of_array = 0;
    num_of_act = 0;
}
//This function will read in a name_act, location and level of difficulty after prompting the user
void activity::New_Activity()
{
    const int NAME = 30;
    char temp[NAME];
    int var = -1;
    cout << "**********************************" << endl; 
    cout << "Enter the name of the activity: ";
    cin.get(temp, NAME, '\n'); //reads in a title
    cin.ignore(100, '\n');
    //size the name_act just right
    name_act = new char [ strlen(temp) + 1];
    strcpy(name_act,temp);
    //read in the rest of the members as before
    cout << "Please enter the location: ";
    cin.get(location,30, '\n');
    cin.ignore(100, '\n');
    while (var <= 0 || var > 10 || !cin)
      {
        cout << "Level of dificulty (1-10): ";
        cin >> var;
        cin.ignore(100, '\n');
        if(var <= 0 || var > 10 || !cin)//Check valid input for var
        {
          cout << "!!!!!!Invalid input????????" << endl;
        }
        else
        {
          level_dif = new int;
          *level_dif = var;
        }
      }
    cout << "Recomended equipment: ";
    cin.get(equip_rec,100, '\n');
    cin.ignore(100, '\n');
    cout << "Remember to bring medical kit (enter med items): ";
    cin.get(med_kit,100, '\n');
    cin.ignore(100, '\n');
    cout << endl;
}
//This function will display activities of the activity-object
void activity::display()
{
    if (NULL == name_act)
    {
      cout << "You did not enter anything!!" << endl;
      return; //nothing is in the name_act array
    }
    
    cout << name_act << '\t' << location << endl << "level of difficulty: " << *level_dif << endl;
    cout << "Recomended equipment: " << equip_rec << '\t'
      << "Med-kit included: " << med_kit << endl;
}

//Compare the rating passed in as an argument with the pointer in the class
bool activity::is_match(int match_diff) 
{
    //cout << "level_dif: " << *level_dif << endl;//test pointer
    if (match_diff == *level_dif)
        return true;
    return false;
}
//Read in activities until the user wants to stop or we run out of space
void list::read_all()
{
    char response = 'y'; //does the user want to do this again
    while (tolower(response) == 'y' && num_of_act < size_of_array)
    //while (num_of_act < size_of_array)
    {
        array[num_of_act].New_Activity();
        if(num_of_act < size_of_array - 1)//only ask when less than the array size
        {
          cout << "Again? (y or n): ";
          cin >> response;
          cin.ignore(100, '\n');
        }
        ++num_of_act;
    }
}
//Display all activities
void list::display_all()
{
    cout << "Printing*************" << endl;
    for (int i = 0; i < num_of_act; ++i)
        array[i].display();
    cout << "Printing*************" << endl;
    cout << endl;
}
//Get input of level difficulty 
//send array to bool is_match and display the one that match.
void list::loop_match()
{
  int match_diff = 0;
  bool rep {true};
  int i = 0;
  cout << "Difficulty you're searching for is: ";
  cin >> match_diff;
  cin.ignore(100,'\n');
  //cout << "Here match_diff: " << match_diff << endl;test match_diff value 
  for (i = 0; i < num_of_act; ++i) 
  {
    rep = array[i].is_match(match_diff);//send the difficulty up for matching
    if (rep)//if true print out the info
        {
          array[i].display();
        }
    //else//testing ability to find false match.
      //cout << "No match!" << endl;
  }
}