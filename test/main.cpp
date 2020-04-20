//
//  main.cpp
//  test
//
//  Created by Wenjuan Zhang on 4/17/20.
//  Copyright © 2020 Wenjuan Zhang. All rights reserved.
//


//***********************
// O: How old are you? I: 10; O: I am 10 years old!
//#include <iostream>
//using namespace std;
//
//int main(){
//    cout << "How old are you?" << endl;
//    int age;
//    cin >> age;
//    cout << "I am " << age << " years old." << endl;
//    return 0;
//}



//***********************
// function prototype
// O: What is the lyric of Happy birthday to you? I: multiple-line-lyric. O: Can you repeat that? I: multiple-line-lyric.
//#include <iostream>
//using namespace std;
//void lyric();       //no {}
//int main(){
//    cout << "What is the lyric of Song?" << endl;
//    lyric();        //no need to ly = lyric() b/c no return of lyric()
//    cout << "Sorry, can you repeat that?" << endl;
//    lyric();
//    return 0;
//}
//void lyric(){
//    cout << "First line of the song" << endl;
//    cout << "Second line of the song" << endl;
//}


//***********************
// function prototype
// O: Give an integer; I: 10; O: The power of 10 is 100.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int square(int x);
//int main(){
//    int val;
//    cout << "Give an integer" << endl;
//    cin >> val;
//    cout << "The square of " << val << " is " << square(val) << endl;
//    return 0;
//}
//int square(int x){
//    return pow(x, 2);
//}


//***********************
// basic math operation
// O: give a value; I: 4.3; O: return abs, round, square root
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//    double val;
//    cout << "Give a value" << endl;
//    cin >> val;
//    cout << "The absolute value of " << val << " is " << abs(val) << endl;
//    cout << "The round value of " << val << " is " << round(val) << endl;
//    cout << "The square root of " << val << " is " << sqrt(val) << endl;
//    return 0;
//}


//https://www.youtube.com/watch?v=hNR6fsksEu8&vl=en


//***********************
// pass by value/copy
//#include <iostream>
//#include <cmath>
//using namespace std;
//void swap(int x, int y);
//int main(){
//    cout << "a is " << 13 << ", and b is " << 20 << endl;
//    cout << "Swap function" << endl;
//    swap(13, 20);
//    cout << "a is " << 13 << ", and b is " << 20 << endl;
//    return 0;
//}
//void swap(int x, int y){
//    int temp = x;
//    x = y;
//    y = temp;
//}


//***********************
// pass by reference
//#include <iostream>
//#include <cmath>
//using namespace std;
//void swap(int& x, int& y);
//int main(){
//    int a = 13; int b = 20;
//    cout << "a is " << a << ", and b is " << b << endl;
//    cout << "Swap function" << endl;
//    swap(a, b);                 // cannot directly use swap(13, 20)
//    cout << "a is " << a << ", and b is " << b << endl;
//    return 0;
//}
//void swap(int& x, int& y){
//    int temp = x;
//    x = y;
//    y = temp;
//}



//***********************
//Dating age question, min = age/2 + 7; max = (age - 7)*2
//#include <iostream>
//#include <cmath>
//using namespace std;
//void Range(int age, int& min, int& max);
//int main(){
//    int age; int min; int max;
//    cout << "How old are you?" << endl;
//    cin >> age;
//    Range(age, min, max);
//    cout << "Youngest age is " << min << endl;
//    cout << "Oldest age is " << max << endl;
//    return 0;
//}
//void Range(int age, int& min, int& max){
//    min = age/2 + 7;
//    max = (age - 7)*2;
//}


//***********************
//Define the quadratic formula
//#include <iostream>
//#include <cmath>
//using namespace std;
//void Quadratic(int a, int b, int c, double& x1, double& x2);
//int main(){
//    int a; int b; int c; double sol1; double sol2;
//    cout << "Give a value" << endl;
//    cin >> a;
//    cout << "Give b value" << endl;
//    cin >> b;
//    cout << "Give c value" << endl;
//    cin >> c;
//    Quadratic(a, b, c, sol1, sol2);
//    cout << "Solution 1 is " << sol1 << endl;
//    cout << "Solution 2 is " << sol2 << endl;
//    return 0;
//}
//void Quadratic(int a, int b, int c, double& x1, double& x2){
//    double temp = b*b - 4*a*c;
//    x1 = (-b + sqrt(temp))/(2*a);
//    x2 = (-b - sqrt(temp))/(2*a);
//}


//***********************
//O: Give a string; I: string; Return
//a
//ab
//abc
//abcd
// bcd
//  cd
//   d
//#include <iostream>
//#include <cmath>
//using namespace std;
//void diamond(string a);
//int main(){
//    string str;
//    cout << "What is your name?" << endl;
//    cin >> str;
//    diamond(str);
//    return 0;
//}
//void diamond(string a){
//    for (int i=0; i<a.length(); i++){
//        cout << a.substr(0,i+1) << endl;
//    }
//    for (int j=1; j<a.length(); j++){
//        for (int k=1; k<j+1; k++){
//            cout << " ";
//        }
//        cout << a.substr(j) << endl;
//    }
//}


//***********************
// read file by word; return total # of words
//#include <iostream>
//#include <cmath>
//#include <fstream>
//using namespace std;
//int main(){
//    ifstream input;
//    int words=0;
//    input.open("/Users/zwj/Desktop/test/test/poem.txt");
//    if (input.fail()) {
//        cout << "Womp womp" << endl;
//    } else {
//        string token;
//        while (input >> token){
//            cout << token << " ";
//            words ++;
//        }
//    }
//    cout << "Total number of words " << words;
//    return 0;
//}


//***********************
// Give one sentence; Give second sentence
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//    string line1, line2;
//    cout << "First sentence: " << endl;
//    getline(cin, line1);
//    cout << "Second sentence: " << endl;
//    getline(cin, line2);
//    cout << line1 << endl;
//    cout << line2 << endl;
//    return 0;
//}


//***********************
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//    int arr[] = {1,3,4,3,6,5};
//    cout << arr << endl;
//    cout << arr[1] << endl;
//    arr[3] = 0;
//    cout << arr << endl;
//    return 0;
//}
//int main(){
//
//    int array[] = {1,3,4,2,4,12,4};
//    int num[12] = {1,3,4,52};
//    cout << array << "\n";
//    cout << array[5] << "\n";
//
//
//    cout << num[2] << "\n";
//    cout << num[5] << "\n";
//    cout << "\n";
//    return 0;
//}


//***********************
//switch-case-break print day of a week
//#include <iostream>
//using namespace std;
//string getDayofWeek(int weekNum){
//    string weekName;
//    switch (weekNum){
//        case 0:
//            weekName = "Sunday";
//            break;
//        case 1:
//            weekName = "Monday";
//            break;
//        case 2:
//            weekName = "Tuesday";
//            break;
//    }
//    return weekName;
//}
//int main(){
//    int num;
//    cout << "Tell me a number ";
//    cin >> num;
//    cout << getDayofWeek(num) << endl;
//    return 0;
//}


//***********************
//Guess secret number, no limits
//#include <iostream>
//using namespace std;
//int main(){
//    int secret = 7;
//    int guess;
//    do {
//        cout << "Make a guess: " ;
//        cin >> guess;
//    } while (guess != secret);
//}


//***********************
//Guess secret number, limits, and print warning
//#include <iostream>
//using namespace std;
//int main(){
//    int secret = 7;
//    int guess;
//    int limits = 4;
//    int time = 0;
//    do {
//        cout << "Make a guess: ";
//        cin >> guess;
//        time ++;
//    } while (guess !=secret && time < limits);
//    if (guess != secret && time == limits){
//        cout << "Use up" << endl;
//    }
//    if (guess == secret && time < limits+1){
//        cout << "Bingo" << endl;
//    }
//}


//**********************
//Practice 1d array
//#include <iostream>
//using namespace std;
////int main(){
////    int num[] = {1,4,2,5,7};
////    for (int i=0; i<sizeof(num); i++){
////        cout << num[i] << endl;
////    }
////    return 0;
////}
//int main(){
//    int num[] = {1,4,2,5,7};
//    size_t n = sizeof(num)/sizeof(num[0]);   //sizeof(array) returns the number of bytes the array occupies
//    for (int i=0; i < n; i++){
//        cout << num[i] << endl;
//    }
////    cout << sizeof(num) << endl;
//    return 0;
//}


//**********************
//Practice 2d array
//#include <iostream>
//using namespace std;
//int main(){
//    int grid[][3] = {{1,2,3},{4,5,6}};
//    for (int i=0; i<2; i++){
//        for (int j=0; j<3; j++){
//            cout << grid[i][j] << endl;
//        }
//    }
//    int row = sizeof(grid)/sizeof(grid[0]);
//    int col = sizeof(grid[0])/sizeof(int);
//    cout << "Number of Rows " << row << endl;
//    cout << "Number of Columns " << col << endl;
//    cout << "First row is " << grid[0] << endl;       //not the first row
//    for (int j=0; j < col; j++){
//        cout << grid[0][j] << "\t";         //print the first row
//    }
//    retaurn 0;
//}


