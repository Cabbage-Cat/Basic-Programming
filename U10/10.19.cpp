#include <cstdio>
#include <iostream>
#include <ctime>

using namespace std;

typedef struct
{
    char Firstname[50];
    char Lastname[50];
    int Gender;
    struct
    {
        int year;
        int month;
        int day;
    }DOB;
    int Heigth;
    int Weight;
}HealthProfile;

void getHealthProfile(HealthProfile *h);
void getPersonInfo(const HealthProfile *h);

int main()
{
    // freopen("C:\\Users\\admin\\Desktop\\Basic-Programming\\U10\\file.in","r",stdin);
    // freopen("C:\\Users\\admin\\Desktop\\Basic-Programming\\U10\\file.out","w",stdout);

    HealthProfile *h = (HealthProfile*)malloc(sizeof(HealthProfile));
    getHealthProfile(h);
    getPersonInfo(h);
    free(h);
    // fclose(stdin);fclose(stdout);
    return 0;
}

void getHealthProfile(HealthProfile *h)
{
    cout << "Please Enter Person's First Name"<<endl;
    cin >> h->Firstname;
    cout << "Please Enter Person's Last Name"<<endl;
    cin >> h->Lastname;
    cout << "Please Enter Person's Gender: 0 is male ,1 is female"<<endl;
    cin >> h->Gender;
    cout << "Please Enter Person's Date of birth , "
         << "use space to split. Ex: 1999 1 1" <<endl;
    cin >> h->DOB.year >> h->DOB.month >> h->DOB.day;
    cout << "Please Enter Person's Heigth"<<endl;
    cin >> h->Heigth;
    cout << "Please Enter Person's Weight"<<endl;
    cin >> h->Weight;
}

void getPersonInfo(const HealthProfile *h)
{
    // Get current Local time.
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int nyear = ltm->tm_year+1900;
    int nmonth = ltm->tm_mon+1;
    int nday = ltm->tm_mday;

    // Calc Person's age.
    int age = nyear - h->DOB.year;
    if (h->DOB.month > nmonth)
        age--;
    else if (h->DOB.month == nmonth && h->DOB.day>nday)
        age--;
    
    // BMI.
    double b = h->Weight*703/(h->Heigth*h->Heigth);
    printf("BMI: %.2lf\n",b);

    // Heart rate.
    int maxrate = 220-age;
    cout << h->Firstname << " " << h->Lastname << endl;
    cout << "Age: " << age << endl;
    cout << "MaxHeartRate: " << maxrate << endl;
    cout << "ExHeartRate: " << maxrate*0.5 << " to " << maxrate*0.85 << endl;
}

