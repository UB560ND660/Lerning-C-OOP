#include <bits/stdc++.h>

using namespace std;

class AbstractEmployee
{
    virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        this->Name = name;
        this->Company = company;
        this->Age = age;
    }

    void setName(string name)
    {
        Name = name;
    }
    void setCompnay(string company)
    {
        Company = company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    string getName()
    {
        return Name;
    }
    string getCompany()
    {
        return Company;
    }
    void Introduction()
    {
        cout << this->getName() << " is " << this->getAge() << " old " << endl;
    }

    void AskforPromotion()
    {
        if (Age >= 30)
        {
            cout << Name << " got promoted! " << endl;
        }
        else
        {
            cout << Name << " Sorry No Promotion for you! " << endl;
        }
    }
};

class Developer : Employee
{
public:
    string FavProgrammingLang;
    Developer(string name, string company, int age,string lang):Employee(name, company, age)
    {
        this->FavProgrammingLang = lang;
    }

    void FixBug() {
        std::cout <<getName()<<" fixed bug using "<< FavProgrammingLang << std::endl;
    }
};

int main()
{
    Developer d = Developer("Joy","Samsung", 23, "C++");
    d.FixBug();
}