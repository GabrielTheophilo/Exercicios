#include<iostream>
using namespace std;

template<class T>
class LLNode{
    public:
        LLNode () {
            proximo = 0;
        };
        
        LLNode(T i, LLNode *entrada = 0){
            info = i;
            proximo = entrada;
        }
        
        LLNode *proximo = 0;
        T info;
};


int main(){
    //Lista Singularmente Linkada
    LLNode <int> LinkedList (12);
    
    cout << "Informação contida no primeiro link: " << LinkedList.info << endl;
    
    LinkedList.proximo = new LLNode <int> (8);
    
    cout << "Informação contida no segundo link: " << LinkedList.proximo->info << endl;
    
    return 0;
}