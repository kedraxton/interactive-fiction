//
// interactive assignement
//Kenna Draxton

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int getNumbersFromUser();


//do I need to list all of these here??
string drawers(string drawerColor);//getWordsFromUser

string closet(string closetColor);

string laundry(string laundryColor);

string locationOfClothes();

//************************************************************************************************

//enter the temperature
int getNumbersFromUser()
{
    int temperature;
    cout << "enter the expected temperature at noon today:";
    cin >> temperature;
    
    if (temperature >= 70)
    {
        cout << "\n\n\nYou should wear shorts today! Looks like it will be pretty toasty. ESPECIALLY when you have to go outside for recess and the sun is beating down on you like a frying pan!"<< endl;
    }
    else
    {
        cout << "You might want to wear pants today. It's going to be chilly nilly. It's especially cold on the slide since it's made of metal...."<< endl;
    }
    
    
    return 0;
};

//************************************************************************************************

string locationOfClothes()
{
   string location;
    cout << "Do you want to look in your drawers, closet, or laundry:\n"<< endl;
    cout << "drawers\n";
    cout << "closet\n";
    cout << "laundry\n";
    cin >> location;
    
    return location;
};


//************************************************************************************************
// drawers
string drawers()
{
    
    string drawerColors;
    cout << "\nPick which color you'd like to wear from your drawers (blue, green, purple):";
    cin >> drawerColors;
    
    return drawerColors;
};

//************************************************************************************************
// closet
string closet()
{
    string closetColors;
    cout << "Pick which color you'd like to wear from your closet(aqua, coral, red):";
    cin >> closetColors;
    
    return closetColors;
};


//************************************************************************************************
// laundry basket
string laundry()
{
    string laundryColors;
    cout << "Pick which color you'd like to wear from your clean laundry(yellow, olive, navy):";
    cin >> laundryColors;
    
    return laundryColors;

};

//************************************************************************************************

int main()
{
    cout << "Goodmorning little one! Time to go to school! Let's check the weather to see what you should wear...You really dislike the constant sun and wish it would rain every now and then....lets check the temperature on your clock!......you read the expected temperature....\n"<< endl;
    
    getNumbersFromUser();
   
    
    string location = locationOfClothes();
    cout << "You chose your " << location << " to look for something to wear..." << endl;
    
    if (location == "drawers")
        {
            cout << "Your drawers tend to not smell so good because sometimes you put your dirty socks back in after wearing them even though you mom says you should do that. Oh well."<<endl;
            drawers();
        }
    if (location == "closet")
    {
        cout << "Your closet is a little scary because you never know what you are going to be attacked with when you open the door. :O It's pretty much where you put everything when you are told to clean your room "<< endl;
        closet();
    }
    else if (location == "laundry")
    {
        
        cout << "The laundry basket. Where you leave your clothes for weeks at a time so they are all wrinkly. Yup."<< endl;
        laundry();
    }
    
            
    cout<< "have a great day at school!  Good choice for the weather today!"<< endl;
    
    return 0;
}




