#include <iostream>
#include <vector>

using namespace std;

//prototypes:

void fillWithP (vector < int > &, int);
void fillWithQ (vector < int > &, int);
bool isPositive (int);
void printVector (const vector < int > &);

/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWithP(projects, 90); // Fills the vector with all value 90s
    fillWithQ(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
void fillWithP (vector < int > &numProjects, int newProjects)
  {
    for (int i=0; i<numProjects(); i++)
    {
      numProjects = newProjects;
    }
  }

void fillWithQ (vector < int > &numQuizzes, int newQuizzes)
  {
    for (int i=0; i<numQuizzes(); i++)
      {
        numQuizzes = newQuizzes;
      }
  }

bool isPositive (int)
  {
    
  }
void printVector (const vector < int > &)
  {

  }
