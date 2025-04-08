/* Name: Hai T. Nguyen
  CS162 section 8 program 4
  This program is to list out all of the activities you are going to do
  Also, this is practice tool on class, pointer, and dynamic memory allocate
*/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
//.h files have the following components:
//  1. #includes
//  2. constants
//  3. structures
//  4. class interfaces
//  5. prototypes
class activity
{
    public:
      activity();//constructor - initialize the data members 
      ~activity();//deallocate the dynamic memory
      void New_Activity();
      void display();
      bool is_match(int match_diff);
    private:
      char * name_act;
      char location[30];
      int * level_dif;
      char equip_rec[100];
      char med_kit[100];
};
//This file contains the class interface for a collection of activities
class list
{
  public:
        list();//constructor, initialize the data members
        ~list();//destructor to deallocate any dynamic memory
        void read_all();
        void display_all();
        void loop_match();
  private:
        activity * array;//can point to one activity or the first of many in an array
        int size_of_array;
        int num_of_act;
};