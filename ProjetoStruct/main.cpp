#include <iostream>
using namespace std;
struct TP_ALUNO
{
    float VP1;
    float VP2;
    float VF;
};
int main (void)
{
    TP_ALUNO Aluno1, Aluno2, Aluno3;
    cout<<"Informe as notas do primeiro aluno"<<endl;
    cin>>Aluno1.VP1;
    cin>>Aluno1.VP2;
    cin>>Aluno1.VF;
    cout<<"A media do primeiro aluno foi de "<<(Aluno1.VP1+Aluno1.VP2*2+Aluno1.VF*3)/6<<endl;
    cout<<"Informe as notas do segundo aluno"<<endl;
    cin>>Aluno2.VP1;
    cin>>Aluno2.VP2;
    cin>>Aluno2.VF;
    cout<<"A media do segundo aluno foi de "<<(Aluno2.VP1+Aluno2.VP2*2+Aluno2.VF*3)/6<<endl;
    cout<<"Informe as notas do terceiro aluno"<<endl;
    cin>>Aluno3.VP1;
    cin>>Aluno3.VP2;
    cin>>Aluno3.VF;
    cout<<"A media do terceiro aluno foi de "<<(Aluno3.VP1+Aluno3.VP2*2+Aluno3.VF*3)/6<<endl;

}
