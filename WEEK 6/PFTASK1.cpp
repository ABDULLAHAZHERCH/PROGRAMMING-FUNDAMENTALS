#include <iostream>
using namespace std;
char grade(int);
main()
{
  system("cls");
  int marks;
  cout << "Enter your marks : ";
  cin >> marks;
  char result = grade(marks);
  cout << result;
}
char grade(int marks)
{
  char gradee;
  if (marks > 85)
  {
    gradee = 'A';
  }
  else if (marks < 86 && marks > 82)
  {
    gradee = 'B';
  }
  else if (marks < 81 && marks > 70)
  {
    gradee = 'C';
  }
  else if (marks < 71 && marks > 60)
  {
    gradee = 'D';
  }
  else if (marks < 61 && marks > 49)
  {
    gradee = 'E';
  }
  else if (marks < 50)
  {
    gradee = 'F';
  }
  return gradee;
}