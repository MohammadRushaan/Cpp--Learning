/*Topics covered: datatypes
                  namespace
                  typedef
                  cout

*/

#include <iostream>
#include <vector>

using namespace std;
using std::cout;
using std::string;
/*This is a multi line comment.
Used to write multiple paragraphs
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// this is a datatype, with alias pairlist_t , we usually add _t after the alias
typedef std::string text_t;

using newText_t = std::string;

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main() 
{
    int x=0;
    
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Step1" << '\n';

    //double : to store floating point decimals
    //char : to store a single charachter
    //bool : to store true or false
    //string : it is technically an object that stores sequence of charachters, hence std is required

    std::string name= "Bro";
    std::cout <<"Hello " << name <<endl;

    //const keyword fixes the value of a variable
    const double pi= 3.14;

    /*Namespace: Provides a solutiion for preventing name conflicts in large projects.each entity needs a unique name.
                 A namespace allows for identically named entities as long as the namespaces are different
    */

    std::cout <<x;
    std::cout <<first::x;
    std::cout <<second::x << endl;

    //if you use using namespace std: then no need of prefix std::

    string name2 ="Rus";
    cout << "Hello " << name2 <<endl;

    /* tyepdef: reserved keyword used to create an additional name(alias) for another datatype
                New identifier for an existing datatype
                helps with readability and reduces types
                need to include header file vector
                Use when there is clear benfit
                replaced with 'using' (works better with templates)
                using alias = datatype

    */

    std::vector<std::pair<std::string, int>> def1;
    pairlist_t def2;

    std::string text1="Hello";
    text_t text2="Hello2";

    cout<< text2 <<endl;
    //both will be of same datatype, this helps imrpove readability and reduce typos

    newText_t text3= "Hello3";

    cout<< text3 <<endl;

    return 0;

}