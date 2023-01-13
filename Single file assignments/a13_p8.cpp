/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p8
*/

#include <iostream>
#include <exception>

using namespace std;

//class definition
class OwnException : public exception
{
    private:
    string data;

  public:
    OwnException(string input)
    {
        this->data = input;
    }
    virtual const string what()
    {
        return "OwnException\n";
    }
};

//function definition
void errfunction(int a){
    switch (a)
    {
    case 1:
        throw'a';
        break;

    case 2:
        throw 12;
        break;

    case 3:
        throw true;
        break;

    default:
        throw OwnException("Default case exception");
        break;
    }
}

int main(){
    //loop for catching each error type
    for(int i=1;i<=4;i++){
        try {
            errfunction(i);
        }
        catch (char x){
                cout << "Caught in main: " << x << endl;
            }
        catch (int y){
                cout << "Caught in main: " << y << endl;
            }
        catch (bool z){
                cout << "Caught in main: " << z << endl;
            }
        catch (OwnException& err){
                cerr << err.what() << endl;
            }
    }
    return 0;
}