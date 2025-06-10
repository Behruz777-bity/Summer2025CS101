////
//// Created by Babajanov Bexruz on 10/06/25.
////
//#include <iostream>
//using namespace std;
//int main() {
//    char light;
//    cout << "Please enter a first character of light: ";
//    cin >> light;
//    switch (light) {
//        case 'g': cout<<"Go!";
//        break;
//        case 'y': cout<<"Get ready!";
//        break;
//        case 'r': cout<<"Stop!";
//        break;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//    int grade;
//    cout<<"Please input your grade: ";
//    cin>>grade;
//
//    switch (grade/10) {
//        case 10: cout<<'A';
//        break;
//        case 9: cout<<'A';
//        break;
//        case 8: cout<<'B';
//        break;
//        case 7: cout<<'C';
//        break;
//        case 6: cout<<'D';
//        break;
//        default: cout<<"F"<<endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int w;
//    cout<<"Enter the weight of your package: ";
//    cin>>w;
//    if (w<=0) {
//        cout<<"Invalid input."<<endl;
//    }
//    else if (w>20) {cout<<"The package cannot be shipped.";}
//    else {
//        switch (w) {
//            case 1:
//            case 2: cout<<3500;
//            break;
//            case 3: cout<<5500;
//            break;
//            case 4:
//            case 5: cout<<8500;
//            break;
//            case 6:
//            case 7:
//            case 8: cout<<10500;
//            break;
//            default: cout<<"Package can't be shipped."<<endl;
//        }
//    }
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout<<"Enter a digit: ";
//    cin>>n;
//    switch (n) {
//        case 0: cout<<"Zero";
//        break;
//        case 1: cout<<"One";
//        break;
//        case 2: cout<<"Two";
//        break;
//        case 3: cout<<"Three";
//        break;
//        case 4: cout<<"Four";
//        break;
//        case 5: cout<<"Five";
//        break;
//        case 6: cout<<"Six";
//        break;
//        case 7: cout<<"Seven";
//        break;
//        case 8: cout<<"Eight";
//        break;
//        case 9: cout<<"Nine";
//        break;
//        default: cout<<"It is not a digit."<<endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int number;
//    char guess;
//
//
//    number = 7;
//
//
//    cout << "Guess whether the number is even or odd (e/o): ";
//    cin >> guess;
//
//
//    bool isEven = (number % 2 == 0);
//
//
//    cout << "The number was: " << number << endl;
//
//    if ((guess == 'e' && isEven) || (guess == 'o' && !isEven)) {
//        cout << "Correct guess!" << endl;
//    } else {
//        cout << "Incorrect guess." << endl;
//    }
//
//    return 0;
//}