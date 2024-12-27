// Q-1 


// #include<iostream>
// using namespace std;

// string checkGrade(int score) {
//     if (score >= 90 && score <= 100) {
//         return "A - Grade";
//     } else if (score >= 80 && score < 90) {
//         return "B - Grade";
//     } else if (score >= 70 && score < 80) {
//         return "C - Grade";
//     } else if (score >= 60 && score < 70) {
//         return "D - Grade";
//     } else if (score < 60 && score >= 0) {
//         return "F - Grade";
//     } else {
//         return "Invalid";
//     }
// }

// void gradeChecker() {
//     int score;
//     cout << "Enter student score (0-100): ";
//     cin >> score;
//     string grade = checkGrade(score);
//     cout << "The grade is: " << grade << std::endl;
// }

// int main() {
//     gradeChecker();
//     return 0;
// }











// Q-2


// #include <iostream>
// using namespace std;

// void checkNumber(int num1) {
//     if (num1 > 0) {
//         cout << num1 << " is Positive number " << endl;
//     } else if (num1 < 0) {
//         cout << num1 << " is negative number " << endl;
//     } else {
//         cout << num1 << " is zer0 " << endl;
//     }
// }

// int main() {
//     int num1 = 100;
//     checkNumber(num1);
//     return 0;
// }










// Q - 3


// #include <iostream>
// using namespace std;

// void checkTriangle(int side1, int side2, int side3) {
//     if(side1 == side2 && side1 == side3){
//         cout << "The triangle is an equilateral triangle.";
//     }else if(side1 == side2 || side1 == side3 || side2 == side3){
//         cout << "The triangle is an isosceles triangle.";
//     }else if(side1 != side2 && side1 != side3 && side2 != side3)
//         cout << "The triangle is a scalene triangle.";
// }

// int main() {
//     int side1 = 3;
//     int side2 = 3;
//     int side3 = 5;
//     checkTriangle(side1, side2, side3);
//     return 0;
// }











// Q - 4


// #include <iostream>
// using namespace std;

// void checkVowel(char x) {
//     if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u' || x =='A' || x =='E' || x =='I' || x =='O' || x =='U'){
//         cout << "The character is a vowel.";
//     }else{
//         cout << "The character is a consonant.";
//     }
// }

// int main() {
//     char x = 'i';
//     checkVowel(x);
//     return 0;
// }












// Q - 5


// #include <iostream>
// using namespace std;

// void vote(int age) {
//     if (age >= 18) {
//         cout << "You are eligible to vote." << endl;
//     } else {
//         cout << "You are not eligible to vote." << endl;
//     }
// }

// int main() {
//     vote(age);
//     return 0;
// }














// Q - 6


// #include <iostream>
// using namespace std;

// void login(string username, int password) {
//     if(username == "admin" && password == 1234){
//         cout << "Login successful!";
//     }else{
//         cout << "Invalid username or password!";
//     }
// }

// int main() {
//     string username = "admin";
//     int password = 1234;
//     login(username, password);
//     return 0;
// }













// Q - 7


// #include <iostream>
// using namespace std;

// void checkColor(string color) {
//     if(color == "red"){
//         cout << "Stop";
//     }else if(color == "Yellow"){
//         cout << "Slow down";
//     } else if(color == "Green"){
//         cout << "Go";
//     }else{
//         cout << "Unknown color";
//     }
// }

// int main() {
//     string color = "red";
//     checkColor(color);
//     return 0;
// }












// Q - 8


// #include <iostream>
// using namespace std;

// void avg(int arr[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     int avg = sum / n;
//     cout << "Average of the array elements is: " << avg << endl;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     avg(arr, n);
//     return 0;
// }












// Q - 9


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void Array(int arr[], int n) {
//     int newarr[n];
//     for(int i = 0; i < n; i++){
//         newarr[i] = arr[i];
//     }
//     std::sort(newarr, newarr + n);
//     for(int i = 0; i < n; i++){
//         std::cout << newarr[i] << std::endl;
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     Array(arr, n);
//     return 0;
// }













// Q - 10


// #include <iostream>
// using namespace std;

// void count(int arr[], int n) {
//     int sum = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 == 0){
//             cout << "even numbers :- " << arr[i] << endl;
//             sum++;
//         }else if(arr[i] % 2 == 1){
//             cout << "odd numbers :- " << arr[i] << endl;
//         }
//     }

//     int x = n - sum;

//     cout << "Total Number of odd numbers: " << x << endl;
//     cout << "Total Number of even numbers: " << sum << endl;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     count(arr, n);

//     return 0;
// }













// Q - 11


// #include <iostream>
// using namespace std;

// void elem(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++){        
//         if(arr[i] != arr[i + 1]){
//             cout << arr[i] << " " ;
//         }
//     }
//     cout << arr[n - 1] << " ";
// }

// int main() {
//     int arr[] = {1,2,3,4,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     elem(arr, n);

//     return 0;
// }












// Q - 12


// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }

// void modifyArray(int arr[], int n, int value) {
//     arr[n] = value;
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     modifyArray(arr, n, 6);

//     printArray(arr, n);

//     return 0;
// }












// Q - 13


// #include <iostream>
// using namespace std;

// void arr1(int arr[], int n) {
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     bool flag = false;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == 3){
//             flag = true;
//             break;
//         }
//     }
//     if(flag){
//         cout << "Array contains 3: True" << endl;
//     } else {
//         cout << "Array contains 3: False" << endl;
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     arr1(arr, n);
//     return 0;
// }












// Q - 14


// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// void arr2(int arr[], int n) {
//     int newArr[n + 1];
//     newArr[0] = 10;
//     for (int i = 0; i < n; i++) {
//         newArr[i + 1] = arr[i];
//     }
//     printArray(newArr, n + 1);
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     arr2(arr, n);
//     return 0;
// }












// Q - 15


// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// void rem(int arr[], int n) {
//     n--;
//     printArray(arr, n);
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     rem(arr, n);
//     return 0;
// }











// Q - 16


// #include <iostream>
// using namespace std;

// bool pos(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] <= 0) {
//             return false;
//         }
//     }
//     return true;
// }

// void arr1(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     arr1(arr, n);
//     if (pos(arr, n)) {
//         cout << "All elements are positive: True" << endl;
//     } else {
//         cout << "All elements are positive: False" << endl;
//     }
//     return 0;
// }










// Q - 17


// #include <iostream>
// using namespace std;

// void num(int arr[], int n) {
//     int pos = 0, neg = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             pos++;
//         } else if (arr[i] < 0) {
//             neg++;
//         }
//     }
//     cout << "Positive numbers: " << pos << endl;
//     cout << "Negative numbers: " << neg << endl;
// }

// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     num(arr, n);
//     return 0;
// }












// Q - 18 


// #include <iostream>
// using namespace std;

// void ind(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     ind(arr, n);
//     return 0;
// }










// Q - 19 


// #include <iostream>
// using namespace std;

// bool asc(int arr[] , int n){
//     for(int i = 0; i < n - 1; i++){
//         if(arr[i] > arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << (asc(arr, n)? "True" : "False") << endl;
//     return 0;
// }










// Q - 20 



//  Aproch - 1


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void diff(int arr[], int n){
//     sort(arr, arr + n);
//     int diff = arr[n-1] - arr[0];
//     cout << "Difference: " << diff << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     diff(arr, n);
//     return 0;
// }


//  Aproach - 2


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int diff(int arr[] , int n){
//     int maxele = *max_element(arr , arr+n);
//     int minele = *min_element(arr , arr+n);
//     return maxele - minele;
// }

// int main(){
//     int arr[] = {80,30,70,50,20};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Difference between max and min elements: " << diff(arr , n) << endl;
//     return 0;
// }











// Q - 21



// Approach 1: Using ASCII values

// #include <iostream>
// using namespace std;
// string Upe(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32;
//         }
//     }
//     return str;
// }

// Approach 2: Using toupper() function
// #include <cctype>
// string Upe(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
//     return str;
// }

// Approach 3: Using transform() function
// #include <algorithm>
// string Upe(string str) {
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
//     return str;
// }



// int main() {
//     string str = "Hello World";
//     string up = Upe(str);
//     cout << up << endl;
//     return 0;

// }





// Q - 22


// Approach 1: Using length() function
// int strlen(string str){
//     return str.length();
// }

// Approach 2: Using loop
// int strlen(string str){
//     int len = 0;
//     while(str[len] != '\0'){
//         len++;
//     }
//     return len;
// }



// int main() {
//     string str = "Hello World";
//     cout << "Length of string: " << strlen(str) << endl;
//     return 0;
// }



// Q - 23 


// #include <iostream>
// using namespace std;

// void strcat(string& str, const string& str1){
//     str.append(str1);
// }

// int main(){
//     string str = "hello ";
//     string str1 = "world";
//     strcat(str, str1);
//     cout << "Concatenated string: " << str << endl;
//     return 0;
// }






// Q - 24


// #include <iostream>
// using namespace std;

// string rem(string str) {
//     int start = 0, end = str.length() - 1;
//     while (start <= end && str[start] == ' ') {
//         start++;
//     }
//     while (end >= start && str[end] == ' ') {
//         end--;
//     }
//     str = str.substr(start, end - start+1 );
//     return str;
// }

// int main() {
//     string str = "   hello   ";
//     cout << "String after removing whitespace: " << rem(str) << endl;
//     return 0;
// }










// Q - 25 



// #include <iostream>
// #include <sstream>
// #include <vector>
// using namespace std;

// std::vector<std::string> split(const std::string& inputString) {
//     std::istringstream iss(inputString);
//     std::vector<std::string> words;
//     std::string word;

//     while (iss >> word) {
//         words.push_back(word);
//     }

//     return words;
// }

// int main() {
//     std::string input = "Hello world, welcome to JavaScript!";
//     std::vector<std::string> words = split(input);

//     for (const auto& word : words) {
//         std::cout << "'" << word << "', ";
//     }

//     return 0;
// }












// Quaternion - 26


// #include <iostream>
// using namespace std;



// Approach 1: Using string length and indexing

// bool checkEndsWith(string str, char c) {
//     int len = str.length();
//     if (str[len - 1] == c) {
//         return true;
//     }
//     return false;
// }



// Approach 2: Using string substr and comparison

// bool checkEndsWith(string str, char c) {
//     string lastChar = str.substr(str.length() - 1);
//     if (lastChar == string(1, c)) {
//         return true;
//     }
//     return false;
// }



// int main() {
//     string str = "Hello World";
//     char c = 'd';
//     bool result = checkEndsWith(str, c);
// }










// Question - 27



// #include <iostream>
// usinng namespace std;