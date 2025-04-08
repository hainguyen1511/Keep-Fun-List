/* Name: Hai T. Nguyen
  CS162 section 8 program 4
  This program is to list out all of the activities you are going to do
  Also, this is practice tool on class, pointer, and dynamic memory allocate
*/
#include "Activities.h"
//Prototypes
/*class activity
void New_Activity();
void display();
bool is_match(int match_diff);
class list
void read_all();
void display_all();
void loop_match();
*/
int main()
{
    activity Fun_Activities;
    list Fun_Activities_list;
    Fun_Activities_list.read_all();
    Fun_Activities_list.display_all();
    Fun_Activities_list.loop_match();
    return 0;
}