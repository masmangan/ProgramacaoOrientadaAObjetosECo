// teste.cpp (Roland Teodorowitsch; 13 abr. 2021)

#include <iostream>
#include "Turma.hpp"

bool testaPessoa() {
    Pessoa *p;
    string teste1 = "Teste 1 2 3...";
    string teste2 = "3 2 1... Teste!";
    p = new Pessoa();
    if (p->obtemNome().compare("")!=0)
        return false;
    p->defineNome(teste1);
    if (p->obtemNome().compare(teste1)!=0)
        return false;
    delete p;
    p = new Pessoa(teste1);
    if (p->obtemNome().compare(teste1)!=0)
        return false;
    p->defineNome(teste2);
    if (p->obtemNome().compare(teste2)!=0)
        return false;
    delete p;
    return true;
}

bool testaAluno() {
    Aluno *a;
    string nom1 = "Teste 1 2 3...";
    int mat1 = 123;
    string nom2 = "3 2 1... Teste!";
    int mat2 = 321;
    a = new Aluno();
    if (a->obtemNome().compare("")!=0 || a->obtemMatricula()!=0)
        return false;
    a->defineNome(nom1);
    a->defineMatricula(mat1);
    if (a->toString().compare("Teste 1 2 3... (123)")!=0)
        return false;
    delete a;
    a = new Aluno(nom1,mat1);
    if (a->obtemNome().compare(nom1)!=0 || a->obtemMatricula()!=mat1)
        return false;
    a->defineNome(nom2);
    a->defineMatricula(mat2);
    if (a->obtemNome().compare(nom2)!=0 || a->obtemMatricula()!=mat2)
        return false;
    delete a;
    return true;
}

bool testaProfessor() {
    Professor *p;
    string nom1 = "Teste 1 2 3...";
    int mat1 = 123;
    double sal1 = 123.45;
    string nom2 = "3 2 1... Teste!";
    int mat2 = 321;
    double sal2 = 543.21;
    p = new Professor();
    if (p->obtemNome().compare("")!=0 || p->obtemMatricula()!=0 || p->obtemSalario()!=0.0)
        return false;
    p->defineNome(nom1);
    p->defineMatricula(mat1);
    p->defineSalario(sal1);
    if (p->toString().compare("Teste 1 2 3... (123; R$123.45)")!=0)
        return false;
    delete p;
    p = new Professor(nom1,mat1,sal1);
    if (p->obtemNome().compare(nom1)!=0 || p->obtemMatricula()!=mat1 || p->obtemSalario()!=sal1)
        return false;
    p->defineNome(nom2);
    p->defineMatricula(mat2);
    p->defineSalario(sal2);
    if (p->obtemNome().compare(nom2)!=0 || p->obtemMatricula()!=mat2 || p->obtemSalario()!=sal2)
        return false;
    delete p;
    return true;
}

bool testaRecurso() {
    Recurso *r;
    string nom1 = "Teste 1 2 3...";
    int qua1 = 123;
    string nom2 = "3 2 1... Teste!";
    int qua2 = 321;
    r = new Recurso();
    if (r->obtemNome().compare("")!=0 || r->obtemQuantidade()!=0)
        return false;
    r->defineNome(nom1);
    r->defineQuantidade(qua1);
    if (r->toString().compare("Teste 1 2 3... (123)")!=0)
        return false;
    delete r;
    r = new Recurso(nom1,qua1);
    if (r->obtemNome().compare(nom1)!=0 || r->obtemQuantidade()!=qua1)
        return false;
    r->defineNome(nom2);
    r->defineQuantidade(qua2);
    if (r->obtemNome().compare(nom2)!=0 || r->obtemQuantidade()!=qua2)
        return false;
    delete r;
    return true;
}

bool testaTurma() {
    Turma *t;
    int cod1 = 123;
    string dis1 = "Teste 1 2 3...";
    int cod2 = 321;
    string dis2 = "3 2 1... Teste!";
    Professor *p2 = new Professor("Professor 2",2222,2222.22);
    string r2a = "Turma: 321 - 3 2 1... Teste!\n";
    string r2b = "Professor: Professor 2 (2222; R$2222.22)\n";
    
    t = new Turma();
    if (t->toString().compare("Turma: 0 - \n")!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=nullptr)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;
    t->defineCodigo(cod1);
    t->defineDisciplina(dis1);
    if (t->toString().compare("Turma: 123 - Teste 1 2 3...\n")!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=nullptr)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;
    delete t;
    t = new Turma(cod1, dis1);
    if (t->toString().compare("Turma: 123 - Teste 1 2 3...\n")!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=nullptr)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;
    t->defineCodigo(cod2);
    t->defineDisciplina(dis2);
    t->defineProfessor(p2);
    if (t->toString().compare(r2a+r2b)!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=p2)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;
    delete t;
    cout << "> Subteste 1 para Turma (construtores e métodos básicos): OK" << endl;
    
    t = new Turma(cod2, dis2);
    t->defineProfessor(p2);
    if (t->toString().compare(r2a+r2b)!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=p2)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;   
    Aluno *alunos[MAX_ALUNOS+1];
    string respostas[MAX_ALUNOS+1];
    string resp = r2a+r2b+"Alunos:\n";
    for (int i=0; i<MAX_ALUNOS+1; ++i) {
        alunos[i] = new Aluno("Aluno "+to_string(i),1000 + i);
        resp += "- " + alunos[i]->toString() + "\n";
        respostas[i] = resp;
    }
    for (int i=0; i<MAX_ALUNOS; ++i) {
        if (t->obtemNumAlunos() != i)
            return false;
        if (t->incluiAluno(alunos[i])!=true)
            return false;
        if (t->obtemNumAlunos() != i+1)
            return false;
        if (t->obtemAluno(i)!=alunos[i])
            return false;
        if (t->obtemAluno(i+1)!=nullptr)
            return false;
        if (t->toString().compare(respostas[i])!=0)
            return false;
    }
    if (t->obtemNumAlunos() != MAX_ALUNOS)
        return false;
    if (t->incluiAluno(alunos[MAX_ALUNOS])!=false)
        return false;
    if (t->obtemNumAlunos() != MAX_ALUNOS)
        return false;
    if (t->obtemAluno(MAX_ALUNOS)!=nullptr)
        return false;
    if (t->toString().compare(respostas[MAX_ALUNOS-1])!=0)
        return false;
    for (int i=MAX_ALUNOS; i>0; --i) {
        if (t->obtemNumAlunos() != i)
            return false;
        t->removeAluno(0);
        int nAlunos = t->obtemNumAlunos();
        if (nAlunos != i-1)
            return false;
        for (int j=0; j<nAlunos; ++j) {
            if (t->obtemAluno(j) != alunos[MAX_ALUNOS-i+1+j])
                return false;
        }
        if (t->obtemAluno(nAlunos)!=nullptr)
            return false;
    }
    for (int i=0; i<MAX_ALUNOS+1; ++i)
        delete alunos[i];
    delete t;
    cout << "> Subteste 2 para Turma (inserção e exclusão de alunos): OK" << endl;

    t = new Turma(cod2, dis2);
    t->defineProfessor(p2);
    if (t->toString().compare(r2a+r2b)!=0 || t->obtemNumAlunos()!=0 || t->obtemNumRecursos()!=0 || t->obtemProfessor()!=p2)
        return false;
    for (int i=-1; i<=MAX_ALUNOS; ++i)
        if (t->obtemAluno(i)!=nullptr || t->removeAluno(i)!=false)
            return false;
    for (int i=-1; i<=MAX_RECURSOS; ++i)
        if (t->obtemRecurso(i)!=nullptr || t->removeRecurso(i)!=false)
            return false;   
    Recurso *recursos[MAX_RECURSOS+1];
    string respostasR[MAX_RECURSOS+1];
    resp = r2a+r2b+"Recursos:\n";
    for (int i=0; i<MAX_RECURSOS+1; ++i) {
        recursos[i] = new Recurso("Recurso "+to_string(i)+" ("+to_string(i+1)+")");
        resp += "- " + recursos[i]->toString() + "\n";
        respostasR[i] = resp;
    }
    for (int i=0; i<MAX_RECURSOS; ++i) {
        if (t->obtemNumRecursos() != i)
            return false;
        if (t->incluiRecurso(recursos[i])!=true)
            return false;
        if (t->obtemNumRecursos() != i+1)
            return false;
        if (t->obtemRecurso(i)!=recursos[i])
            return false;
        if (t->obtemRecurso(i+1)!=nullptr)
            return false;
        if (t->toString().compare(respostasR[i])!=0)
            return false;
    }
    if (t->obtemNumRecursos() != MAX_RECURSOS)
        return false;
    if (t->incluiRecurso(recursos[MAX_RECURSOS])!=false)
        return false;
    if (t->obtemNumRecursos() != MAX_RECURSOS)
        return false;
    if (t->obtemRecurso(MAX_RECURSOS)!=nullptr)
        return false;
    if (t->toString().compare(respostasR[MAX_RECURSOS-1])!=0)
        return false;
    for (int i=MAX_RECURSOS; i>0; --i) {
        if (t->obtemNumRecursos() != i)
            return false;
        t->removeRecurso(0);
        int nRecursos = t->obtemNumRecursos();
        if (nRecursos != i-1)
            return false;
        for (int j=0; j<nRecursos; ++j) {
            if (t->obtemRecurso(j) != recursos[MAX_RECURSOS-i+1+j])
                return false;
        }
        if (t->obtemRecurso(nRecursos)!=nullptr)
            return false;
    }
    for (int i=0; i<MAX_RECURSOS+1; ++i)
        delete recursos[i];
    delete t;
    cout << "> Subteste 3 para Turma (inserção e exclusão de recursos): OK" << endl;

    delete p2;
    return true;
}

int main() {
    cout << "Teste para Pessoa: " << (testaPessoa()?"OK":"FALHOU") << endl;
    cout << "Teste para Aluno: " << (testaAluno()?"OK":"FALHOU") << endl;
    cout << "Teste para Professor: " << (testaProfessor()?"OK":"FALHOU") << endl;
    cout << "Teste para Recurso: " << (testaRecurso()?"OK":"FALHOU") << endl;
    cout << "Teste para Turma: " << (testaTurma()?"OK":"FALHOU") << endl;
    cout << endl;
    return 0;
}
