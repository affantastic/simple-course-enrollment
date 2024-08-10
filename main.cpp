#include <iostream>
using namespace std;
class course{
private:
 int courseCode;
 string courseName;
 string instructorName;
 int maxCapacity;
 int currentEnrollment;
public:
 course(){
 courseCode=0;
 courseName="null";
 instructorName="null";
 maxCapacity=50;
 currentEnrollment=0;
 }
 course(int c, string n, string i, int m, int e ){
 courseCode=c;
 courseName=n;
 instructorName=i;
 maxCapacity=m;
 currentEnrollment=e;
 }
 void enrollStudent(){
 if(currentEnrollment<maxCapacity){
 currentEnrollment++;
 cout<<"Student has been enrolled!"<<endl;
 }
 else{
 cout<<"Capacity is full"<<endl;
 }
 }
 void availableSeats(){
 maxCapacity-currentEnrollment;
 }
 void displayDetails(){
 cout<<"course code : "<<courseCode<<endl;
 cout<<"course name : "<<courseName<<endl;
 cout<<"instructor name : "<<instructorName<<endl;
 cout<<"maximum capacity = "<<maxCapacity<<endl;
 cout<<"current enrollment : "<<currentEnrollment<<endl;
 }
};
main(){
 course course1;
 cout<<"Default Course:"<<endl;
 course1.displayDetails();
 course1.availableSeats();
 cout<<endl;
 course course2(1234,"OOP","Hassan ",34,32);
 cout<<"Course Enrolled:"<<endl;
 course2.enrollStudent();
 course2.displayDetails();
 course2.availableSeats();
}
