// code to add content at particular position
// using tellp()
#include <fstream>
using namespace std;

int main()
{
    long position;
    fstream file;

    // open the file in read and write mode
    file.open("C:\\Users\\samar\\Desktop\\he.txt");

    // write content in the file
    file.write("this is an apple", 16);
    position = file.tellp();

    // set position of pointer usin seekp
    file.seekp(position - 7);
    file.write(" sam", 4);
    file.close();
}
