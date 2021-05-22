#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
   public:
    int age;
    string first_name;
    string last_name;
    int standard;


    //get & set age
    void set_age(int ageData) {
            age = ageData;
        }
        int get_age() {
            return age;
        }
        //get & set first_name
         void set_first_name(string first_nameData) {
            first_name = first_nameData;
        }
        string get_first_name() {
            return first_name;
        }
        //get & set last_name
         void set_last_name(string last_nameData) {
            last_name = last_nameData;
        }
        string get_last_name() {
            return last_name;
        }

        //get & set standard
         void set_standard(int standardData) {
            standard = standardData;
        }
        int get_standard() {
            return standard;
        }

        // return to_string which is a description methods

        string to_string(){

         string  lname=get_last_name();
           string fname=get_first_name();
            int a=get_age();
            int s=get_standard();
            stringstream age0;
            stringstream standard0;
            string _age;
            string _standard;
            age0<<a;
            age0>>_age;

            standard0<<s;
            standard0>>_standard;

        return _age+","+fname+","+lname+","+_standard;
        }



};


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
