//Roll-cgpa input-output into text file

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    float cgpa;

public:
    Student(){}
    void write_to_disk(const string& file_name)
    {
        cin>>roll>>cgpa;
        ofstream fout(file_name, ios::app);
        fout<<roll<<" "<<fixed<<setprecision(2)<<cgpa<<endl;
        fout.close();
    }
    void read_from_disk(const string& file_name, int sn)
    {
        ifstream fin(file_name);
        int count=0;
        while(fin>>roll>>cgpa){
            count++;
            if(count==sn){
                cout<<"Stud "<<sn<<" Roll:"<<roll<<" Cgpa:"<<fixed<<setprecision(2)<< cgpa<<endl;
                break;
            }
        }
        fin.close();
    }
};
int main(){
    Student s;
    s.write_to_disk("stud.txt");
    s.read_from_disk("stud.txt",2);
    return 0;
}
