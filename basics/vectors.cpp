#include <iostream>
#include <vector> // for using vector functnality

using namespace std;

int main()
{

  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels[3] << endl;

  vector<int> test_score{1, 2, 3, 4, 5, 6, 7, 8};
  cout << "\nTest scores using array syntax" << endl;
  cout << test_score[0] << endl;
  cout << test_score[1] << endl;
  cout << test_score[2] << endl;
  cout << test_score[3] << endl;

  cout << "\nTest scores using vector syntax " << endl;
  cout << test_score.at(0) << endl;
  cout << test_score.at(1) << endl;
  cout << test_score.at(2) << endl;
  cout << test_score.at(3) << endl;

  cout << "\nsize of the vector is " << test_score.size();

  // cout << "\nEnter the value of test score";
  // cin >> test_score.at(0);
  // cin >> test_score.at(1);
  // cin >> test_score.at(2);

  // cout << "\nupdated test score is" << endl;
  // cout << test_score.at(0) << endl;
  // cout << test_score.at(1) << endl;
  // cout << test_score.at(2) << endl;
  // cout << test_score.at(3) << endl;

  cout << "\nEnter a test score to add in a test value" << endl;
  int score_to_add{20};
  cin >> score_to_add;

  test_score.push_back(score_to_add);

  cout << "\nEnter one more test score in a test value" << endl;
  int adding{30};
  cin >> adding;
  test_score.push_back(adding);

  for (int i = 0; i < test_score.size(); i++)
  {
    cout << "\n test score" << test_score.at(i);
  }

  return 0;
}